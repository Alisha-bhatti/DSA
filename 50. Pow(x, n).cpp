class Solution {
public:
   // DONE BY RECURSION
    double myPow(double x, int n) {
       long long N=n;   //handles overflow ---
       if(N==0) return 1;
       if(N<0) x=1/x, N=-N;  //handling negative power

        if(N%2==0){
           return pow(x*x,N/2);
        }
        else{
            return x*pow(x*x,N/2);
        }
        
    }
};
