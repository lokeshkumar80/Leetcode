// class Solution {
//     public:
// POTD Problem : Submitted Successfully
//         bool evencheckspecial(vector<int>& nums){
//             int n = nums.size();
//             int i=0;
//             while(i<n){
//                 if(i%2 == 0){
//                     if(nums[i]%2 != 0){
//                         return false;
//                     }
//                 }
//                 else{
//                     if(nums[i]%2 == 0){
//                         return false;
//                     }
//                 }
//                 i++;
//             }
//             return true;
//         }
    
//         bool oddcheckspecial(vector<int>& nums){
//             int n = nums.size();
//             int i=0;
//             while(i<n){
//                 if(i%2 == 0){
//                     if(nums[i]%2 == 0){
//                         return false;
//                     }
//                 }
//                 else{
//                     if(nums[i]%2 != 0){
//                         return false;
//                     }
//                 }
//                 i++;
//             }
//             return true;
//         }
    
//         bool isArraySpecial(vector<int>& nums) {
//             int n = nums.size();
//             int i=0;
//             if(nums[0] % 2 == 0){
//                 bool ans1 = evencheckspecial(nums);
//                 return ans1;
//             }
//             else{
//                 bool ans2 = oddcheckspecial(nums);
//                 return ans2;
//             }
//         }
//     };