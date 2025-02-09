// class Solution {
//     public:
//         int findDuplicate(vector<int>& nums) {
//             sort(nums.begin(), nums.end());
//             int n = nums.size();
//             int ans;
//     // possible cases are [1,3,4,2,2] . [3,1,3,4,2] , [3,3,3,3,3] , [1,3,4,2,1] , [1,1] , [7,9,7,4,2,8,7,7,1,5]
//             for(int i=0; i<n; i++){
//                 // this loop will never go to i = n-1; so no need to worry about overflow condition
//                 if(nums[i]==nums[i+1]){
//                     ans = nums[i];
//                     break;
//                 }
//             }
//             return ans;
//         }
//     };