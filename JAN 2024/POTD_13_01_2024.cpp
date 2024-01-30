class Solution {
public:
    int minSteps(string s, string t) {
        int ans = 0;
        unordered_map<char,int> mps;
        unordered_map<char,int> mpt;
        for(char ch : s){
            mps[ch]++;
        }
        for(char ch : t){
            mpt[ch]++;
        }
        for(auto itt : mpt){
            for(auto its : mps){
                // found both key and values same
                if(itt.first == its.first && itt.second == its.second){
                    ans += itt.second;
                    itt.second = -1;
                }
                else if(itt.first == its.first){
                    if(itt.second > its.second){
                        ans += its.second;
                        itt.second -= its.second;
                    }
                    else if(itt.second < its.second){
                        ans += itt.second;
                        itt.second = -1;
                    }
                }
            }
        }
        int total = 0;
        for(auto it : mpt){
            total += it.second;
        }
        return total - ans;
    }
};
