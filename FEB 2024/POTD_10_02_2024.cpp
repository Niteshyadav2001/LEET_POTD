class Solution {
public:
    int functionCount(string s, int i, int j)
    {
        int count = 0;
        while(i >= 0 && j < s.length() && s[i] == s[j])
        {
            count++;
            i--;
            j++;
        }
        return count;
    }

    int countSubstrings(string s) {
        int totalCount = 0;
        for(int i = 0;i<s.length();i++)
        {
            //odd
            int oddSum = functionCount(s,i,i);
            totalCount = totalCount + oddSum;
            //even
            int evenSum = functionCount(s,i,i+1);
            totalCount = totalCount + evenSum;
        }
        return totalCount;
    }
};
