// class Solution {
// public:
//     vector<int> constructTransformedArray(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> result(n);

//         for (int i = 0; i < n; i++) {

//             int j = (i + nums[i]) % n; 
//             // In C++, the % operator keeps the sign of
//             // the left operand.

//             if (j < 0){
//                 j = j + n;   // handle negative wrap
//             } 
            
//             result[i] = nums[j];
//         }
//         return result;
//     }
// };