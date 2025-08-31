// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     // in postorder traversal first visit to the left and then right and then node....
//     void postorder(TreeNode* root, vector<int>& ans){
//         if(root == NULL){
//             return;
//         }
//         postorder(root->left, ans);
//         postorder(root->right, ans);
//         ans.push_back(root->val);
//     }
    
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int>ans;
//         postorder(root, ans);
//         return ans;
//     }
// };