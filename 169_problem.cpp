// class Solution {
//     public:
//         int majorityElement(vector<int>& nums) {
//             int n = nums.size();
//             int count = 1;
//             int maxcount = INT_MIN;
//             int majority_element; // here in question ,,you may assume maj. ele. always exists in array so no need to initialize maj ele with -1;
//             sort(nums.begin(), nums.end());// it takes O(nlogn)
//             if(n==1){
//                 return nums[0];
//             }
//             for(int i=0; i<n-1; i++){
//                 if(nums[i]==nums[i+1]){
//                     count++;
//                     if(i==n-2){
//                         if(count>maxcount){
//                             maxcount = count;
//                             majority_element = nums[i];
//                         }
//                     }
//                 }
//                 else{
//                     if(count>maxcount){
//                         maxcount = count;
//                         majority_element = nums[i];
//                     }
//                     count = 1;
//                 }
//             }
//             return majority_element;
//         }
//     };