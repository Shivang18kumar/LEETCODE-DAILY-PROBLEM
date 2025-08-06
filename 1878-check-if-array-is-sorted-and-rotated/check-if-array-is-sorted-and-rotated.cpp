class Solution {
public:
    bool check(vector<int>& nums) {

        int n = nums.size();
        vector<int> check(n);

        for(int i = 0;i<n;i++){
            int curridx=0;
            for(int j=i;j<n;j++){
                check[curridx++]=nums[j];
            }
            for(int j=0;j<i;j++){
                check[curridx++]=nums[j];
            }

            bool isSorted  = true;
            for(int i=0;i<n-1;i++){
                if (check[i]>check[i+1]){
                    isSorted = false;
                    break;
                }
            }
            if(isSorted){
                return true;
            }
        }
        return false;
    }
};