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

//     // we are using the height of the tree function to find the diameter of the tree
//     // in O(n)

//     int Height(TreeNode* root, int &diameter){
//         if(root == NULL){
//             return 0;
//         }

//         int LH = Height(root->left, diameter);
//         int RH = Height(root->right, diameter);

//         diameter = max(diameter, LH + RH);

//         return 1 + max(LH, RH);
//     }

//     int diameterOfBinaryTree(TreeNode* root) {
//         int diameter = 0;
//         Height(root, diameter);
//         return diameter;
//     }

// };