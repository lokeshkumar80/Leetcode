// class Solution {
//     public:
//         int singleNonDuplicate(vector<int>& nums) {
//            int n = nums.size();
//            int s=0;
//            int e=n-1;
//            int mid = s + (e-s)/2;
//            // When you perform mid & 1, it checks only the LSB:
//            // If mid & 1 == 0, the number is even.
//            // If mid & 1 == 1, the number is odd.
//            while(s<=e){
//                 if(s==e){
//                     return nums[s]; // when single element only
//                 }
//                 // mid check
//                 if(mid&1){ 
//                     // when mid is odd
//                     if(mid+1 <= n-1 && nums[mid] == nums[mid+1]){
//                         // move left // single element iske pichhe hi hoga
//                         e = mid-1;
//                     }
//                     else if(mid-1 >= 0 && nums[mid] == nums[mid-1]){
//                         // move right // single element iske aage hi hoga 
//                         s = mid + 1;
//                     }
//                 }
//                 else{
//                     // when mid is even
//                     // it can be the answer index
//                     if(mid+1 <= n-1 && nums[mid] == nums[mid+1]){
//                         // move right // s = mid + 2 nhi to mid + 1 vala element dobara check hoga
//                         s = mid + 2;
//                     }
//                     else {
//                         // move left // may be we are on the answer so e = mid so that ans should not be lost
//                         e = mid;
//                     }
//                 }
//                 // update mid
//                 mid = s + (e-s)/2 ;
//            } 
//         return nums[mid];
//         }
//     };