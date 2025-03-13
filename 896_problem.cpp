// class Solution {
//     public:
//         bool isMonotonic(vector<int>& nums) {
//             int n = nums.size();
//             int countinc = 1;
//             int i=0;
//             while(i<n-1){
//                 if(nums[i]<=nums[i+1]){
//                     countinc++;
//                 }
//                 else{
//                     break;
//                 }
//                 i++;
//             }
    
//             int countdec = 1;
//             int j=0;
//             while(j<n-1){
//                 if(nums[j]>=nums[j+1]){
//                     countdec++;
//                 }
//                 else{
//                     break;
//                 }
//                 j++;
//             }
    
//             if(countinc == n || countdec == n){
//                 return true;
//             }
//             else{
//                 return false;
//             }
//         }
//     };