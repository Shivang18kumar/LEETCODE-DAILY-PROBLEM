class Solution {
public:
    static const long long MOD = 1e9 + 7;
    long long power(int base,long long exp){
        if(exp==0) return 1;
        long long half= power(base,exp/2)%MOD;
        long long res = (half*half)%MOD;
        if(exp%2==1) return (res*base)%MOD;
        else return res;
    }

    int countGoodNumbers(long long n) {
        long long evenp = (n+1)/2;
        long long oddp = (n/2);
        return (power(5,evenp)*power(4,oddp))%MOD;
    }
};