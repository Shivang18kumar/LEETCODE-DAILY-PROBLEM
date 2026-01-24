class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m = nums2.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int pos=-1;
            for(int j =0;j<m;j++){
                if(nums2[j]==nums1[i]){
                    pos=j;
                    break;
                }
            }
            int nextgr = -1;
            for(int j=pos+1;j<nums2.size();j++){
                if(nums2[j]>nums1[i]){
                     nextgr=nums2[j];
                     break;
                }
            }
            ans.push_back(nextgr);
        }
        return ans;
    }
};