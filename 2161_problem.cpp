// class Solution {
//     public:
//         // POTD Problem : Submitted Successfully...
//         vector<int> pivotArray(vector<int>& nums, int pivot) {
//             vector<int>ans;
//             vector<int>equal;
//             vector<int>greater;
//             int n = nums.size();
//             int i = 0;
//             while(i<n){
//                 if(nums[i]<pivot){
//                     ans.push_back(nums[i]);
//                 }
//                 else if(nums[i]==pivot){
//                     equal.push_back(nums[i]);
//                 }
//                 else if(nums[i]>pivot){
//                     greater.push_back(nums[i]);
//                 }
//                 i++;
//             }
//             ans.insert(ans.end(), equal.begin(), equal.end());
//             ans.insert(ans.end(), greater.begin(), greater.end());
//             return ans;
//         }
//     };