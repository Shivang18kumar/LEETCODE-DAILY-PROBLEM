class Solution {
public:
    bool divideArray(vector<int>& nums) {
        
        unordered_map<int,int> counter;
        
        int m=nums.size();
        for(int i=0;i<m;i++){
            counter[nums[i]]++;
        }
       
          for (const auto& pair : counter) {
            if (pair.second % 2 != 0) {
                return false;
            }
        }
        return true;
    }
};