class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int mind = INT_MAX;
        for(int i=1;i<n;i++){
            mind=min(mind,arr[i]-arr[i-1]);
        }
        vector<vector<int>>sol;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1] == mind){
                sol.push_back({arr[i-1],arr[i]});
            }
        }
        return sol;
    }
};