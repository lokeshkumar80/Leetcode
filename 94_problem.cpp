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
//     // // Solution 1 : Using Recursion
//     // // in inorder traversal first visit left and then root and then right
//     // void inorder(TreeNode* root, vector<int> &ans){
//     //     if(root==NULL){
//     //         return;
//     //     }
//     //     inorder(root->left, ans);
//     //     ans.push_back(root->val);
//     //     inorder(root->right, ans);
//     // }

//     // // This is only given in problem to complete...
//     // vector<int> inorderTraversal(TreeNode* root) {
//     //     vector<int>ans;
//     //     inorder(root, ans);
//     //     return ans;
//     // }

//     // // Solution 2 : Using Iteration

//      vector<int> inorderTraversal(TreeNode* root) {
//         vector<int>ans;

//         // check empty tree
//         if(root == NULL){
//             return ans;
//         }

//         // create stack that is LIFO data structure...
//         stack<TreeNode*>st;

//         // we have already a root node in the stack now put left of top node untill left becomes null 
//         // when left becomes null then pop and store and check for right of recent popped if yes then put
//         // and again same procedure untill the stack is empty...

//         while(true){
//             if(root!=NULL){
//                 st.push(root);
//                 root = root->left;
//             }else{
//                 if(st.empty()){
//                     break;
//                 }
//                 root = st.top();
//                 st.pop();
//                 ans.push_back(root->val);
//                 root = root->right;
//             }
//         }
//         return ans;
//     }
// };