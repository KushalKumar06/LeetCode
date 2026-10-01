class Solution {
public:
    bool isValid(string s) {
        stack<char>ch;

        for(int i = 0; i<s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            ch.push(s[i]);

            else{
                if(ch.size() == 0)
                return false;

                if(ch.top() == '(' && s[i] == ')' ||
                   ch.top() == '{' && s[i] == '}' || 
                   ch.top() == '[' && s[i] == ']')
                   ch.pop();


                   else
                   return false;
            }
        }

        return ch.size() == 0;
    }
};