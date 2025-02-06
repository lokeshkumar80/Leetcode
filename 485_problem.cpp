// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int n = nums.size();
//         int count = 0;
//         int maxnumone = 0;
//         int s=0;
//         int e=n-1;
//         while(s<=e){
//             if(nums[s]==1){
//                 count++;
//                 if(s==e){
//                     if(count>maxnumone){
//                         maxnumone = count;
//                     }
//                 }
//                 s++;
//             }
//             else if(nums[s]==0){
//                 if(count>maxnumone){
//                 maxnumone = count;
//                 }
//                 count = 0;
//                 s++;
//             }
//         }
//         return maxnumone;
//     }
// };