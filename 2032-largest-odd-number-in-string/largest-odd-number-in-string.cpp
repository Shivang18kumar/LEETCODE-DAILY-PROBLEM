class Solution {
public:
    string largestOddNumber(string num) {
        int idx=-1;
        string ans;
        int n=num.size();
        for(int i=n-1;i>=0;i--){
            if(num[i]%2!=0){
                idx=i;
                break;
            }
        }
        if(idx!=-1) {
            ans=num.substr(0,idx+1);
        }
        return ans;
    }
};