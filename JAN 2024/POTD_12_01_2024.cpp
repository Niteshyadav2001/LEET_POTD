class Solution {
public:
    bool halvesAreAlike(string s) {
        int cnt1 = 0,cnt2 = 0;
        for(int i = 0;i < s.length()/2;i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            cnt1++;
        }
        for(int i = s.length()/2;i < s.length();i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            cnt2++;
        }
        if(cnt1 == cnt2) return true;
        return false;
    }
};
