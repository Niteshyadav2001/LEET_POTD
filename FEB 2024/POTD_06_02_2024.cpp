class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        vector<string> st = str;
        vector<string> temp;
        vector<vector<string>> v;
        for(int i = 0;i < str.size();i++){
            sort(str[i].begin() , str[i].end());
        }

        vector<pair<string,int>> p(str.size());
        for(int i = 0;i < str.size();i++){
            p[i].first = str[i];
            p[i].second = i;
        }

        sort(p.begin() , p.end());

        //ordered map
        map<string,int> mp;
        for(int i = 0;i < str.size();i++){
            mp[str[i]]++;
        }

        //traversing the map
        int num1 = 0;
        for(auto it : mp){
            temp = {};
            int num = num1 + it.second;
            for(int i = num1;i < num;i++){
                temp.push_back(st[p[i].second]);
                num1++;
            }
            v.push_back(temp);
        }
        return v;
    }
};
