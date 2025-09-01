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
//     // // in postorder traversal first visit to the left and then right and then node....
//     // void postorder(TreeNode* root, vector<int>& ans){
//     //     if(root == NULL){
//     //         return;
//     //     }
//     //     postorder(root->left, ans);
//     //     postorder(root->right, ans);
//     //     ans.push_back(root->val);
//     // }
    
//     // vector<int> postorderTraversal(TreeNode* root) {
//     //     vector<int>ans;
//     //     postorder(root, ans);
//     //     return ans;
//     // }

//     // //solution 2: Using two stacks...

//     // vector<int> postorderTraversal(TreeNode* root) {
//     //     vector<int>ans;
//     //     // first check for empty tree... 
//     //     if(root == NULL){
//     //         return ans;
//     //     }

//     //     // create stacks
//     //     stack<TreeNode*>st1, st2;

//     //     // Now logic
//     //     st1.push(root);
//     //     while(!st1.empty()){
//     //         root = st1.top();
//     //         st1.pop();
//     //         st2.push(root);
//     //         if(root->left){
//     //             st1.push(root->left);
//     //         }

//     //         if(root->right){
//     //             st1.push(root->right);
//     //         }
//     //     }

//     //     while(!st2.empty()){
//     //         ans.push_back(st2.top()->val);
//     //         st2.pop();
//     //     }
//     //     return ans;
//     // }

//     //solution 3: Using one stack...
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int>ans;
//         TreeNode* temp;
//         // first check for empty tree... 
//         if(root == NULL){
//             return ans;
//         }

//         // create stack
//         stack<TreeNode*>st;

//         // Now logic
//         while(root!=NULL || !st.empty()){
//             if(root!=NULL){
//                 st.push(root);
//                 root = root->left;
//             }else{
//                 temp = st.top()->right;
//                 if(temp==NULL){
//                     temp = st.top();
//                     st.pop();
//                     ans.push_back(temp->val);
//                     while(!st.empty() && temp == st.top()->right){
//                         temp = st.top();
//                         st.pop();
//                         ans.push_back(temp->val);
//                     }
//                 }
//                 else{
//                     root = temp;
//                 }
//             }
//         }
//         return ans;
//     }
// };