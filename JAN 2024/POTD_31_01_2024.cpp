class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        stack<pair<int,int>> st;
        vector<int> ans(nums.size());
        for(int i = nums.size() - 1;i >= 0;i--){
            //stack is empty
            if(st.empty()){
                st.push({nums[i],i});
                ans[i] = 0;
            }
            //stack is not empty
            else {
                while(!st.empty() && nums[i] >= st.top().first){
                    st.pop();
                }
                // stack is empty
                if(st.empty()) {
                    ans[i] = 0;
                }
                else {
                    ans[i] = st.top().second - i;
                }
                st.push({nums[i],i});
            }
        }
        return ans; 
    }
};
