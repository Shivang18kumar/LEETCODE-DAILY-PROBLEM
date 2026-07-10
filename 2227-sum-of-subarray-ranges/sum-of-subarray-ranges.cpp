class Solution {
public:
    long long sumSubarrayMins(vector<int>& nums){
        int n = nums.size();
        vector<int> pse(n), nse(n);
        stack<int> st;

        for(int i = 0; i < n; i++){
            while(!st.empty() && nums[st.top()] > nums[i])
                st.pop();
            pse[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        while(!st.empty()) st.pop();

        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && nums[st.top()] >= nums[i])
                st.pop();
            nse[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        long long sum = 0;
        for(int i = 0; i < n; i++){
            sum += 1LL * nums[i] * (i - pse[i]) * (nse[i] - i);
        }
        return sum;
    }

    long long sumsubarraymax(vector<int>& nums){
        int n = nums.size();
        vector<int> pge(n), nge(n);
        stack<int> st;

        for(int i = 0; i < n; i++){
            while(!st.empty() && nums[st.top()] < nums[i])
                st.pop();
            pge[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        while(!st.empty()) st.pop();

        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && nums[st.top()] <= nums[i])
                st.pop();
            nge[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        long long sum = 0;
        for(int i = 0; i < n; i++){
            sum += 1LL * nums[i] * (i - pge[i]) * (nge[i] - i);
        }
        return sum;
    }

    long long subArrayRanges(vector<int>& nums) {
        return sumsubarraymax(nums) - sumSubarrayMins(nums);
    }
};