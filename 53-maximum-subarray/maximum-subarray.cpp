class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int total=0;
        int res=nums[0];
        for(auto n:nums){
            if(total<0) total=0;
            total+=n;
            res=max(res,total);
        }
        return res;
        
    }
};