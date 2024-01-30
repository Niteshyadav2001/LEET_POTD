class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i = 0;i < tokens.size();i++)
        {
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/")
            {
                int n = stoi(tokens[i]);
                st.push(n);
            }
            else
            {
                int n2 = st.top(); st.pop();
                int n1 = st.top(); st.pop();
                //for add operation
                if(tokens[i] == "+")
                {
                    int operation = n1 + n2;
                    st.push(operation);
                }
                //for subtract operation
                else if(tokens[i] == "-")
                {
                    int operation = n1 - n2;
                    st.push(operation);
                }
                //for multiplication operation
                else if(tokens[i] == "*")
                {
                    int operation = n1 * n2;
                    st.push(operation);
                }
                else if(tokens[i] == "/")
                {
                    int operation = n1 / n2;
                    st.push(operation);
                }
            }
        }
        return st.top();
    }
};
