class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums) {
        set<int> st;
        unordered_map<int,int> mp;
        for(int i = 0;i < nums.size();i++){
            mp[nums[i]]++;
        }
        int temp = 0;
        for(auto it : mp){
            st.insert(it.second);
        }
        if(mp.size() == st.size()) return true;
        return false;
    }
};
