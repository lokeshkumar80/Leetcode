// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row = matrix.size();
//         int col = matrix[0].size();
//         // convert 2D to 1D scenerio
//         int n =  row*col; // total no of boxes; treat it as size of 1D array
//         int s = 0;
//         int e = n-1;
//         int mid = s + (e-s)/2;
//         while(s<=e){
//             // convert 1D to 2D scenerio
//             int rowIndex = mid/col;
//             int colIndex = mid % col;
//             int currentElement = matrix[rowIndex][colIndex];
//             // Binary Search
//             if(target == currentElement){
//                 return true;
//             }
//             else if(target > currentElement){
//                 // move rightward
//                 s = mid + 1;
//             }
//             else{
//                 // move leftward
//                 e = mid - 1;
//             }
//             // mid update
//             mid = s + (e-s)/2;
//         }
//         // if we come out of this loop means target not found
//         return false;
//     }
// };