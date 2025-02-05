// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int n = nums.size();
//         int s = 0;
//         int e = n-1;
//         int mid = s + (e-s)/2;
//         //  binary search
//         while(s<=e){
//             if(nums[mid]==target){
//                 return mid; // return the index if the target is found
//             }
//             else if(target<nums[mid]){
//                 // move left
//                 e = mid-1;
//             }
//             else{
//                 //move right
//                 s = mid + 1;
//             }
//             // update of the mid 
//             mid = s + (e-s)/2 ;
//         }
//         // we are outside the loop means target not found
//         return mid; // it is the index where target should be placed
//     }
// };