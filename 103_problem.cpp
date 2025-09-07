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
//     void zigzagtraversal(TreeNode* root, vector<vector<int>> &ans){
//         if(root==NULL){
//             return;
//         }

//         queue<TreeNode*>q;
//         q.push(root);
//         int level = 1;

//         while(!q.empty()){
//             int size = q.size();
//             vector<int>levelorder;

//             for(int i=0; i<size; i++){
//                 TreeNode* node = q.front();
//                 q.pop();
//                 levelorder.push_back(node->val);
//                 if(node->left){
//                     q.push(node->left);
//                 }
//                 if(node->right){
//                     q.push(node->right);
//                 }
//             }

//             // below given logic ensures zigzaglevelorder traversal this can also be done using flag
//             if(level % 2 != 0){
//                 ans.push_back(levelorder);
//             }else{
//                 reverse(levelorder.begin(), levelorder.end());
//                 ans.push_back(levelorder);
//             }
//             level++;
//         }
//     }
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         vector<vector<int>>ans;
//         zigzagtraversal(root, ans);
//         return ans;
//     }
// };