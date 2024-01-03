class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<vector<int>> ans;
        vector<int> temp;
        temp.push_back(nums[0]);
        mp[nums[0]]++;
        ans.push_back(temp);
        for(int i = 1;i < nums.size();i++)
        {
            if(mp[nums[i]] > ans.size() - 1)
            {
                vector<int> temp;
                temp.push_back(nums[i]);
                ans.push_back(temp);
                mp[nums[i]]++;
            }
            else
            {
                ans[mp[nums[i]]].push_back(nums[i]);
                mp[nums[i]]++;
            }
        }
        return ans;
    }
};