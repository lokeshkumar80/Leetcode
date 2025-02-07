// class Solution {
//     public:
//         int singleNumber(vector<int>& nums) {
//             int n = nums.size();
//             // we can use xor operation for solving this question
//             int ans = 0; // bcz 0^0 = 0 and 0^a = a
//             for(int i=0; i<n; i++){
//                 ans = ans^nums[i];
//             }
//             return ans;
//         }
// };