class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int XORresult=0;
        for(int i=0;i<nums.size();i++){
            XORresult=XORresult ^ nums[i];   
        }
        return XORresult;
    }
};