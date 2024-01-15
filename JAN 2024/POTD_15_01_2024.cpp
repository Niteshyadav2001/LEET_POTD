class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int> ans0;
        vector<int> ans1;
        map<int,int> win;
        map<int,int> mp;
        for(int i = 0;i < matches.size();i++){
            win[matches[i][0]] = -1;
        }
        for(int i = 0;i < matches.size();i++){
            mp[matches[i][1]]++;
            win[matches[i][1]]++;
        }
        for(auto it : win){
            if(it.second == -1){
                ans0.push_back(it.first);
            }
        }
        for(auto it : mp){
            if(it.second == 1){
                ans1.push_back(it.first);
            }
        }
        return {ans0,ans1};
    }
};
