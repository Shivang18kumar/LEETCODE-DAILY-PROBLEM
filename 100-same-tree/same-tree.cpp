/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        queue<pair<TreeNode*, TreeNode*>> qu;
        qu.push({p,q});

        while(!qu.empty()){
            auto node = qu.front();
            qu.pop();

            auto node1 = node.first;
            auto node2 = node.second;

            if(node1==NULL && node2==NULL) continue;

            if(node1==NULL || node2==NULL || node1->val!=node2->val) return false;

            qu.push({node1->left,node2->left});
            qu.push({node1->right,node2->right});
        }
        return true;
    }
};