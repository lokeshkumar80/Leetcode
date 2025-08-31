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

//     // // Solution 1. Using Recursion
//     // // in preorder traversal first root then left and then right ...
//     // void preorder(TreeNode* root, vector<int>& ans) {
//     //     if(root == NULL){
//     //         return;
//     //     }
//     //     ans.push_back(root->val);
//     //     preorder(root->left, ans);
//     //     preorder(root->right, ans);
//     // }

//     // vector<int> preorderTraversal(TreeNode* root) {
//     //     vector<int>ans;
//     //     preorder(root, ans);
//     //     return ans;
//     // }

//     // // Solution 2. Iterative Method

//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int>ans;
//         // check edge case
//         if(root == NULL){
//             return ans;
//         }

//         // create stack --> and we know stack is LIFO and in preorder travesal order is node , left , right
//         // so to put in stack is root , and first pop it and now to put children of root order is
//         // put right and then left so original order of preorder traversal would retained with LIFO.
//         stack<TreeNode*>st;
//         st.push(root);

//         while(!st.empty()){
//             root = st.top();
//             st.pop();
//             ans.push_back(root->val);
//             if(root->right){
//                 st.push(root->right);
//             }
//             if(root->left){
//                 st.push(root->left);
//             }
//         }
//         return ans;
//     }

// };