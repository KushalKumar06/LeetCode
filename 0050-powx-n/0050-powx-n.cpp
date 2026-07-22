class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;

        long long pf = n;

        if(pf < 0){
            x = 1/x;
            pf = -pf;
        }
        
        while(pf > 0){
            if(pf % 2 == 1)
            ans *= x;

            x *= x;
            
            pf /= 2;
        }
        
        return ans;
    }
};