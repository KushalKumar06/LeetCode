class Solution {
public:
    bool isHappy(int n) {

        if(n ==1)
        return true;

        unordered_set<int>s;
        int sum = 0;

        while(true){

            int digit = n%10;
            sum += digit * digit;
            n = n/10;

            if(n == 0){
               if(sum == 1) return true;
               if(s.count(sum)) return false;

               s.insert(sum);
               n = sum;
               sum = 0;
            }
        }
    }
};