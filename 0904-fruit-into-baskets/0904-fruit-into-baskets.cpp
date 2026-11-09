class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0;
        int res = 1;

        unordered_map<int, int>m;

        for(int high = 0; high<fruits.size(); high++){
            m[fruits[high]]++;

            while(m.size() > 2){
                m[fruits[low]]--;
                low++;
                if(m[fruits[low-1]] == 0)
                m.erase(fruits[low-1]);
            }

            if(m.size() == 2){
                int len = high - low + 1;
                res = max(len, res);
            }
        }
        if(m.size() < 2){
            return fruits.size();
        }
        return res;
    }
};