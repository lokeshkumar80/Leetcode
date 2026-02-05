// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         int n = nums.size();
//         vector<int>posarray;
//         vector<int>negarray;
//         for(int i=0; i<n; i++){
//             if(nums[i]>0){
//                 posarray.push_back(nums[i]);
//             }
//             else{
//                 negarray.push_back(nums[i]);
//             }
//         }
//         int j = 0;
//         int k = 0;
//         for(int i=0; i<n; i++){
//            if(i%2==0){
//             nums[i] = posarray[j];
//             j++;
//            }
//            else{
//             nums[i] = negarray[k];
//             k++;
//            }
//         }
//         return nums;
//     }
// };