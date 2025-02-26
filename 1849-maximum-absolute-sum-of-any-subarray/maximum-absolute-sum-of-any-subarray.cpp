class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int currsubsum=nums[0];
        int maxsubsum=nums[0];
        for(int i=1;i<n;i++){
            currsubsum=max(nums[i],currsubsum+nums[i]);
            maxsubsum=max(currsubsum,maxsubsum);
        }
         int minsubsum=nums[0];
         currsubsum=nums[0];
            for(int i=1;i<n;i++){
            currsubsum=min(nums[i],currsubsum+nums[i]);
            minsubsum=min(currsubsum,minsubsum);
        }
        return max(abs(maxsubsum),abs(minsubsum));
        
    }
};