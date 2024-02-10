class Solution {
public:
    string frequencySort(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        string str = "";
        unordered_map<char,int> mp;
        vector<pair<int,char>> v;

        //find frequency of each element
        for(char c : s) mp[c]++;

        //store it in pair according to frequency as an key
        for(auto it : mp) v.push_back({it.second,it.first});

        //sort it in reverse order
        sort(v.rbegin() , v.rend());

        //appending it with string
        for(int i = 0;i < v.size();i++){
            for(int j = 0;j < v[i].first;j++){
                str += v[i].second;
            }
        }
        return str;
    }
};
