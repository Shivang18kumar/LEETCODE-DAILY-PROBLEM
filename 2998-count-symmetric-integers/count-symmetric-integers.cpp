class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int res=0;
        for(int i=low;i<=high;i++){
            string s=to_string(i);
            int n = s.size();
            if(n%2!=0) continue;
            int mid=n/2,left=0,right=0;
            for(int j=0;j<mid;j++){
                left=left + s[j]-'0';
                right+=s[j+mid]-'0';
            }
            if (left==right) res++;

            }
            return res;

        }
        
    
};
