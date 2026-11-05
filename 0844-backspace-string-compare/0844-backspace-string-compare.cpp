class Solution {
public:
    bool backspaceCompare(string s, string t) {
      int off1 = 0;
      int cm1 = 0;

      string ans1 = "";

      while(cm1 < s.size()){
        if(s[cm1] != '#'){
            ans1 += s[cm1];
            cm1++;
        }

        else {
           // continue;
            cm1++;
            if(ans1.size() > 0)
            ans1.pop_back();
        }

      }  

       int off2 = 0;
       int cm2 = 0;

       string ans2 = "";

       while(cm2 < t.size()){
        if(t[cm2] != '#'){
            ans2 += t[cm2];
            cm2++;
        }

        else{
           // continue;
            cm2++;
            if(ans2.size() > 0)
            ans2.pop_back();
         }
        }

       return ans1 == ans2;
    }
};