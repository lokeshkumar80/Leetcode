// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         vector<int>ans;
//         for(int i=0; i<n; i++){
//             for(int j=0; j<n; j++){
//                 if(i==j){
//                     continue;
//                 }
//                 else if(target == nums[i] + nums[j]){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     return ans;
//                 }
//             }
//         }
//         return ans; // just for if there is no such pair of index ..
//     }
// };