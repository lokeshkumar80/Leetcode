// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n = nums.size();
//         int s=0;
//         int e=n-1;
//         int index=1;
//         while(s<e){
//             if(nums[index]==0 || index<=s){
//                 index++;
//             }
//             else if(nums[s]==0 && nums[index]!=0){
//                 swap(nums[s],nums[index]);
//                 s++;
//                 index++;
//             }
//             else if(nums[s]!=0){
//                 s++;
//             }
//             if(index>n-1){
//                 break;
//             }
//         }

//     }
// };