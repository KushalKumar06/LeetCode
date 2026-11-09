class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0;
        int res = INT_MIN;

        unordered_map<int,int>m;

        for(int high = 0; high<s.size(); high++){
            m[s[high]]++;

            int k = high - low + 1;

            while(m.size() < k){
                m[s[low]]--;
                low++;
                if(m[s[low-1]] == 0)
                m.erase(s[low-1]);

                k = high - low + 1;
            }

            int len = high - low + 1;
            res = max(res, len);
        }

        if(s.size() == 0)
        return 0;
        
        return res;
    }
};