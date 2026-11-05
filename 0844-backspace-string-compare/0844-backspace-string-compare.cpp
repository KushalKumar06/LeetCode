class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int off1 = 0;

        for(int i = 0; i<s.size(); i++){
            if(s[i] != '#'){
                s[off1++] = s[i];
            }

            else{
                if(off1 > 0)
                off1--;
            }
        }

        int off2 = 0;
        for(int i =0 ;i<t.size(); i++){
            if(t[i] != '#'){
                t[off2++] = t[i];
            }

            else{
                if(off2 > 0)
                off2--;
            }
        }

        return s.substr(0,off1) == t.substr(0,off2);
    }
};