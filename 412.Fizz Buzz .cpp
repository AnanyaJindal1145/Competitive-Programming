class Solution {
public:
    vector<string> vect;
    vector<string> fizzBuzz(int n) {
        //string str;
        for(int i=1;i<=n;i++){
            if(i%15==0)
                vect.push_back("FizzBuzz");
            else if(i%3==0)
                vect.push_back("Fizz");
            else if(i%5==0)
                vect.push_back("Buzz");
            else
                vect.push_back(to_string(i));
        }
        return vect;
    }
};