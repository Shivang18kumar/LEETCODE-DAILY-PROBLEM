class Solution {
public:

    long long solve(string &s,int i,int sign,long long num){
        if(i>=s.size() || !isdigit(s[i]))
        return sign*num;

        num=num*10+(s[i]-'0');

        if(sign==-1 && -num<INT_MIN) return INT_MIN;
        if(sign==1 && num>INT_MAX) return INT_MAX;

        return solve(s,i+1,sign,num);
    }


    int myAtoi(string s) {
        int i=0,n = s.size();
        int sign=1;

        while(i<n && s[i]==' ') i++;
        if(i<n &&(s[i]== '-' || s[i] == '+')){
            if(s[i]=='-') sign=-1;
            i++;
        }
        return solve(s,i,sign,0);
    }
};