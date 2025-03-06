// class Solution {
//     public:
// POTD Problem : Submitted Successfully
//         vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
//             int n = grid.size();
//             vector<int>NewOneDgrid;
//             vector<int>ans;
//             int count = 1;
//             int sum = 0;
//             int totalsum;
//             int a;
//             int b;
//             for(int i=0; i<n; i++){
//                 for(int j=0; j<n; j++){
//                     sum += grid[i][j];
//                     NewOneDgrid.push_back(grid[i][j]);
//                 }
//             }
    
//             sort(NewOneDgrid.begin(), NewOneDgrid.end());
    
//             int m = n*n;
//             for(int e=0; e<m; e++){
//                 if(NewOneDgrid[e]!=count){
//                     if(e-1 >= 0 && NewOneDgrid[e]==NewOneDgrid[e-1]){
//                         a = NewOneDgrid[e];
//                         break;
//                     }
//                     else if(e == 0 && NewOneDgrid[e] == NewOneDgrid[e+1]){
//                         a = NewOneDgrid[e];
//                         break;
//                     }
//                     else{
//                         count++;
//                     }
//                 }
//                 count++;
//             }
//             sum = sum - a;
//             totalsum = (m*(m+1))*0.5 ;
//             b = totalsum - sum;
//             ans.push_back(a);
//             ans.push_back(b);
//             return ans;
//         }
//     };