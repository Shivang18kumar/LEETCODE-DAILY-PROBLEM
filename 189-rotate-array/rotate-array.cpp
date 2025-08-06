class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n=arr.size();
        k=k%n;
        /*vector<int> temp(n);
        for(int i=0;i<n;i++){
             temp[(i+k)%n]=nums[i];
        }
        nums=temp;
        */
        reverse(arr.begin(),arr.begin()+(n-k));
        reverse(arr.begin()+(n-k),arr.end());
        reverse(arr.begin(),arr.end());
    }
};