// class Solution {
//     public:
//         int findMin(vector<int>& nums) {
//             int n = nums.size();
//             int key = nums[0]; // put first element to key for comparing at each step
//             int count = 0;
//             int s = 0;
//             int e = n-1;
//             if(nums[0]>=nums[n-1]){ // sorted array is rotated// or 1 element array only
//                 int mid = s + (e-s)/2;
//                 while(s<e){
//                     if(nums[mid]>=key){ // we are in rotated part and moving out of it towards minimum
//                         // move right
//                         s = mid+1;
//                     }
//                     else{ // we are out of rotated part and coming back towards minimum
//                         e = mid;
//                     }
//                     //update mid 
//                     mid = s + (e-s)/2 ;
//                 }
//                 return nums[mid];
//             }
//             else{ // if sorted array is not rotated it means first element will be the min. 
//                 return nums[0];
//             }
//         }
//     };