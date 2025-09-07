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
//     int maxPathDown(TreeNode* root, int &maxsum){
//         if(root==NULL){
//             return 0;
//         }

//         int LeftSum = max(0, maxPathDown(root->left, maxsum));// in case of -ve values it returns 0
//         int RightSum = max(0, maxPathDown(root->right, maxsum)); // same here
//         maxsum = max(maxsum, LeftSum + RightSum + root->val);

//         return root->val + max(LeftSum, RightSum);
//     }

//     int maxPathSum(TreeNode* root) {
//         // int maxsum = 0; 
//         // we can't set initial value as 0 ..
//         // bcz in tree all nodes can also be -ve so final ans may be -ve
//         int maxsum = INT_MIN;
//         maxPathDown(root, maxsum);
//         return maxsum;
//     }
// };