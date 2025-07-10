class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int  res=0;
        int cc=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){ res++; }
            else{
                 cc=max(res,cc);
                 res=0;
                }
            }
        
        return max(cc,res);
    }
};