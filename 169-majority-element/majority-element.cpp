class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int t=nums.size()/2;
        for(auto it:nums){
            mpp[it]++;
            if(mpp[it]>t) return it;
        }
        return -1;
    }
};