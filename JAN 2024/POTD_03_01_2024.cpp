class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> temp;
        int sum = 0; 
        for(int i = 0;i<bank.size();i++)
        {
            int count = 0;
            for(int j = 0;j<bank[i].size();j++)
            {
                if(bank[i][j] == '1')
                {
                    count++;
                }
            }
            temp.push_back(count);
        }
        for(auto i : temp) cout<<i;
        for(int i = 0;i<temp.size();i++)
        {
            int mul = 0;
          if(temp[i] != 0)
          {
              for(int j = i+1;j<temp.size();j++)
              {
                  if(temp[j] != 0)
                  {
                    mul = temp[i] * temp[j];
                    break;
                  }
              }
              sum += mul;
          }
        }
        return sum;
    }
};