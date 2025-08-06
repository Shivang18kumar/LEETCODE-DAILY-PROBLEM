class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int res=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==1){
                res++;
            }
            else{
                c=max(res,c);
                res=0;
            }
        }
        return max(res,c);
    }
};