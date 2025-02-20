class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
       int  n=nums.size();
        string result;
        for(int i=0;i<n;i++){
            nums[i][i]=='0'?result+='1':result+='0';
        }
        return result;
    }
};