class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> p(n);
        for(int i =0 ; i <n;i++){
            p[(i+k)%n] = nums[i];
        }
        nums=p;
    }
    
};