class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            int freq[26] = {0};
            for(int j=i;j<n;j++){
                freq[s[j]-'a']++;
                int maxi=INT_MIN;
                int mini=INT_MAX;
                for(auto f:freq){
                    if(f>0) {
                        maxi=max(maxi,f);
                        mini=min(mini,f);
                    }
                }
                sum+=(maxi-mini);
            }
        }
        return sum;
    }
};