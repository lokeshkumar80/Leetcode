// class Solution {
//     public:
//     //  POTD Problem: understand it and solve it again
//         int lenLongestFibSubseq(vector<int>& arr) {
//             int n = arr.size();
//             unordered_map<int, int> index; // Maps value to index
//             unordered_map<int, int> dp;    // Maps (i, j) pair to sequence length
    
//             int maxLen = 0;
    
//             // Build index map for quick lookup
//             for (int i = 0; i < n; i++) {
//                 index[arr[i]] = i;
//             }
    
//             // Iterate over pairs to build DP table
//             for (int j = 0; j < n; j++) {
//                 for (int i = 0; i < j; i++) {
//                     int x = arr[j] - arr[i];
//                     if (x < arr[i] && index.find(x) != index.end()) { 
//                         // Check if x exists before arr[i]
//                         int k = index[x];
//                         dp[i * n + j] = dp[k * n + i] + 1; 
//                         // Use a 1D hashmap instead of 2D DP table
//                         maxLen = max(maxLen, dp[i * n + j]);
//                     } else {
//                         dp[i * n + j] = 2; // Minimum length is 2 (i, j)
//                     }
//                 }
//             }
    
//             return maxLen >= 3 ? maxLen : 0;
//         }
//     };