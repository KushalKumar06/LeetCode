class Solution {
public:
    int scoreOfParentheses(string s) {
        int curr = 0;
        stack<int>st;

        st.push(0);

        for(int i = 0; i<s.size() ; i++){
            if(s[i] == '(')
            st.push(0);

            else{
                curr = st.top();
                st.pop();

                if(curr == 0){
                    st.top() += curr+1;
                }
                else{
                    st.top() += 2*curr;
                }
            }
        }
        return st.top();
    }
};