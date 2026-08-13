class Solution {
public:

    bool isValid(char ch){
        if(ch >= 'a' && ch <= 'z' || 
           ch >= 'A' && ch <= 'Z' ||
           ch >= '0' && ch <= '9' )
           return true;

           else
           return false;
    }

    char toLowerCase(char ch){
        if(ch >= 'a' && ch <= 'z' ||
           ch >= '0' && ch <= '9' )
           return ch;

           else 
           return ch - 'A' + 'a';
    }

    bool checkPalindrome(string a){
        int i = 0;
        int j = a.size() - 1;

        while(i<=j){
            if(a[i] != a[j])
            return false;

            else{
                i++;
                j--;
            }
        }
        return true;
    }


    bool isPalindrome(string s) {
        string temp;
        int n = s.size();

        for(int i = 0; i<n ; i++){
            if(isValid(s[i]))
            temp.push_back(toLowerCase(s[i]));
        }

        return checkPalindrome(temp);
    }
};