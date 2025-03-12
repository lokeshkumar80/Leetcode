// class Solution {
//     public:
//         int maximumCount(vector<int>& nums) {
//             int n = nums.size();
//             int i=0;
//             int pos=0;
//             int neg=0;
//             while(i<n){
//                 if(nums[i]<0){
//                     neg++;
//                 }else if(nums[i]>0){
//                     pos++;
//                 }
//                 i++;
//             }
//             int ans = max(neg, pos);
//             return ans;
//         }
//     };