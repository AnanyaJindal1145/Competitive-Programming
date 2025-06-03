class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {
        unordered_set<int> visited;
        unordered_set<int> lookable;
        int sum=0;
        for(int i=0;i<initialBoxes.size();i++){
            sum+=dfs(initialBoxes[i],visited,lookable,status,containedBoxes,candies,keys);
        }
        return sum;
    }

    int dfs(int boxnum, unordered_set<int>& visited, unordered_set<int>& lookable, vector<int>& status, vector<vector<int>>& containedBoxes, vector<int>& candies, vector<vector<int>>& keys){
        if(visited.find(boxnum)!=visited.end()){
            return 0;
        }
        if(status[boxnum]==0){
            lookable.insert(boxnum);
            return 0;
        }
        visited.insert(boxnum);
        int total=candies[boxnum];
        for(int i=0;i<containedBoxes[boxnum].size();i++){
            total+=dfs(containedBoxes[boxnum][i],visited,lookable,status,containedBoxes,candies,keys);
        }
        for(int i=0;i<keys[boxnum].size();i++){
            int k=keys[boxnum][i];
            status[k]=1;
            if(lookable.find(k)!=lookable.end()){
                total+=dfs(k,visited,lookable,status,containedBoxes,candies,keys);
            }
        }
        return total;
    }
};
