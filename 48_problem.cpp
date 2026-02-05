// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         // Transpose of nxn 2D matrix
//         for(int i=0; i<n; i++){
//             for(int j=i; j<n; j++){
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }
//         // Now we have to reverse each row of the matrix
//         for(int i=0; i<n; i++){
//             for(int j=0; j<n; j++){
//                 if(j<n-1-j){
//                     swap(matrix[i][j], matrix[i][n-1-j]);
//                 }
//             }
//         }
//     }
// };