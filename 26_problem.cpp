// class Solution {
//     public:
//         int removeDuplicates(vector<int>& nums) {
//         // nums.erase(nums.begin() + i) remove the element of current index and all further elements shift     left by 1 and size of the vector is decreses by one ...
//             int n = nums.size();
//             int i=0;
//             while(i<n-1){
//                 if(nums[i]==nums[i+1]){
//                     nums.erase(nums.begin()+i);
//                     n = nums.size();
//                     continue;
//                 }
//                 i++;
//             }
//             n = nums.size();
//             return n;
//         }
//     };