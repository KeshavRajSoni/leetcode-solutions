class Solution {
public:
    double myPow(double x, int n) {
        long nn = n;
        if(n<0) nn=-nn;
        double ans = 1;

        while(nn>0){
            if(nn%2==0){
                x = x*x;
                nn = nn/2;
            }else{
                ans = ans * x;
                nn--;
            }
        }
        if(n<0){
            ans = 1/ans;
        }
        return ans;
    }
};
