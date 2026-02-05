// class Solution {
// public:
//     vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
//         int n = mat.size(); // total no. of rows
//         // create an array for storing the ans.
//         vector<int>ans;
//         // one_count to store max. no of 1's
//         int one_count = INT_MIN;
//         // row_no is index of the row having max no of 1's
//         int row_no = -1 ;
//         for(int i=0; i<n; i++){
//             int count = 0;
//             for(int j=0; j<mat[i].size(); j++){
//                 if(mat[i][j]==1){
//                     count++;
//                 }
//             }
//             if(count>one_count){
//                 one_count = count;
//                 row_no = i;
//             }
//         }

//         ans.push_back(row_no);
//         ans.push_back(one_count);

//         return ans;
//     }
// };