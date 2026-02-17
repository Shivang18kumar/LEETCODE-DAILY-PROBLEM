class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& candidates, int target, int idx, vector<int>& curr) {
        
        // Base case
        if (target == 0) {
            ans.push_back(curr);
            return;
        }

        for (int i = idx; i < candidates.size(); i++) {

            // ❌ Skip duplicates
            if (i > idx && candidates[i] == candidates[i - 1])
                continue;

            // ❌ If element is bigger than target, stop
            if (candidates[i] > target)
                break;

            // ✅ Pick element
            curr.push_back(candidates[i]);

            // Move to next index (cannot reuse same element)
            solve(candidates, target - candidates[i], i + 1, curr);

            // ✅ Backtrack
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());  // 🔥 Important
        vector<int> curr;
        solve(candidates, target, 0, curr);
        return ans;
    }
};
