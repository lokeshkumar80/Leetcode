// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         // in question expected time complexity is O(logn) and question is about Binary Search .....
//         int n = nums.size();
//         //vector<int>ans(2);// vector of size 2 initialized with 0's is created further inserted elements will be counted as 3rd 4th ...
//         vector<int>ans;

//         // find first postion
//         int s = 0;
//         int e = n-1;
//         int mid = s + (e-s)/2 ;
//         int leftans = -1; // in case of not found initialize with -1
//         while(s<=e){
//             if(nums[mid]==target){
//                 leftans = mid;
//                 //move left
//                 e = mid-1;
//             }
//             else if(target<nums[mid]){
//                 // move towards left
//                 e = mid-1;
//             }
//             else {
//                 // move towards right
//                 s = mid + 1;
//             }
//             // update mid
//             mid = s + (e-s)/2;
//         }
//         ans.push_back(leftans);
        
//         // find last postion
//         s = 0;
//         e = n-1;
//         mid = s + (e-s)/2 ;
//         int rightans = -1; // in case of not found initialize with -1
//         while(s<=e){
//             if(nums[mid]==target){
//                 rightans = mid;
//                 // move towards right
//                 s = mid+1;
//             }
//             else if(target<nums[mid]){
//                 // move towards left
//                 e = mid-1;
//             }
//             else {
//                 // move towards right
//                 s = mid + 1;
//             }
//             // update mid
//             mid = s + (e-s)/2;
//         }
//         ans.push_back(rightans);

//         return ans;
//     }
// };