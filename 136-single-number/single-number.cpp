class Solution {
public:
    int singleNumber(vector<int>& nums) {
      
       int xresult=0;
       for(auto num:nums){
        xresult = xresult^num;
       }
       return xresult;
    }
};