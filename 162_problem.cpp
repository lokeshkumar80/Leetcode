// class Solution {
//     public:
//         int findPeakElement(vector<int>& nums) {
//             int n = nums.size();
//             int s = 0;
//             int e = n-1;
//             int mid = s + (e-s)/2 ;
    
//             // if array is sorted in increasig order last element will be peak element
//             // if array is sorted in decreasing order first element will be peak element
//             // there can be more than one peak but we can return any one of them 
//     // if array has only single element it will always be peak as s=0 , e=0 then mid will also be 0 and     return mid without going to be in the while loop  
//     // we have to do this question in O(log n)
    
//             while(s<e){  // s<=e will lead to in infinite loop
//                 // no need to add extra condition mid + 1 >= n-1 this can only be violated when s = e is allowed in the loop...
//                 if(nums[mid]<nums[mid+1]){
//                     // move right
//                     s = mid + 1;
//                 }
//                 else{
//                     //stay on mid ( because peak can also be on mid)
//                     e = mid;
//                 }
//                 mid = s + (e-s)/2;
//             }
//             return mid;
//         }
//     };