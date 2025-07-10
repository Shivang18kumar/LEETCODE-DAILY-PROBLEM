class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int gsum = 0;
        int asum = (n*(n+1))/2;
        for(int i=0;i<n;i++){
           gsum+=nums[i];
        }
        return (asum-gsum);

    }
};