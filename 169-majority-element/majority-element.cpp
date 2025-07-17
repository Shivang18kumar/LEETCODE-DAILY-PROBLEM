class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mpp;
        int t = nums.size() / 2;
        for (auto it : nums) {
            mpp[it]++;
            if (mpp[it] > t) return it;
        }
        return -1; 
    }
};
