
class Solution {
public:
    using ll = long long;

    long long minimumTime(vector<int>& d, vector<int>& r) {
        auto getLCM = [](ll a, ll b) -> ll {
            return a / gcd(a, b) * b;
        };

        ll low = 0;
        ll high = 1LL * (d[0] + d[1]) * max(r[0], r[1]);
        high = max(high, 100LL);

        while (low < high) {
            ll mid = (low + high) / 2;

            // Hours drone 1 and 2 can actively deliver
            ll t1 = mid - mid / r[0];
            ll t2 = mid - mid / r[1];

            // Time slots when at least one is free to deliver
            ll lcmVal = getLCM(r[0], r[1]);
            ll combined = mid - (mid / r[0] + mid / r[1] - mid / lcmVal);

            bool enoughForDrone1 = t1 >= d[0];
            bool enoughForDrone2 = t2 >= d[1];
            bool totalEnough = (t1 + t2 - combined) >= (d[0] + d[1]);

            if (enoughForDrone1 && enoughForDrone2 && totalEnough)
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};
