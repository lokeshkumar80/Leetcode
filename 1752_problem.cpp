// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int n = nums.size();
//         int count = 1;
//         for(int i=0; i<n-1; i++){
//             if(nums[i]<=nums[i+1]){
//                 continue;
//             }
//             else{
//                 count--;
//                 if(count<0 || nums[0]<nums[n-1]){
//                     count--;
//                     break;
//                 }
//             }
//         }
//         if(count<0){
//             return false;
//         }
//         else{
//             return true;
//         }
//     }
// };