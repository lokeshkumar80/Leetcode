// class Solution {
//     public:
//         int diagonalSum(vector<vector<int>>& mat) {
//             // here we have a square matrix 
//             int n = mat.size();
//             int sum = 0;
//             for(int i=0; i<n; i++){
//                 sum += mat[i][i];
//             }
    
//             int row = 0;
//             int col = n-1;
//             while(row<n){
//                 sum += mat[row][col];
//                 row++;
//                 col--;
//             }
    
//             if(n%2 == 0){
//                 return sum; // no element is common in even size of matrix in primary and secondary diagonal 
//             }else{ // in odd size square matrix centre element is adding twice ...
//                 return sum - mat[n/2][n/2];
//             }
//         }
//     };