// class Solution {
//     public:
           // POTD Problem :- Submitted Scuccessfully...
//         vector<int> applyOperations(vector<int>& nums) {
//             int n=nums.size();
//             vector<int>ans;
//             int i=0;
//             int temp;
//             while(i<n){
//                 if(i+1<n && nums[i]!=0 && nums[i]==nums[i+1]){
//                     temp = 2*nums[i];
//                     nums[i] = temp;
//                     ans.push_back(temp);
//                     nums[i+1] = 0;
//                 }
//                 else if(nums[i]!=0){
//                     ans.push_back(nums[i]);
//                 }
//                 i++;
//             }
            
//             int m = ans.size();
//             while(m<n){
//                 ans.push_back(0);
//                 m++;
//             }
//             return ans;
//         }
//     };