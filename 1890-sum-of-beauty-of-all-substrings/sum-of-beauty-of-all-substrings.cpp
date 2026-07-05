class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int freq[26]={0};
            for(int j=i;j<s.size();j++){
                freq[s[j]-'a']++;
                int maxi=INT_MIN;
                int mini=INT_MAX;
                for(auto it :freq){
                    if(it>0){
                        maxi=max(maxi,it);
                        mini= min (mini,it);
                    }
                }
                ans+=(maxi-mini);
            }
            
        }
        return ans;
    }
};