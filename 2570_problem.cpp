// class Solution {
//     public:
//         // POTD Problem :- Submitted Scuccessfully...
//         vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
//             nums1.insert(nums1.end(), nums2.begin(), nums2.end());
//             sort(nums1.begin(), nums1.end());
//             int n = nums1.size();
//             // vector<vector<int>>ans;
//             vector<int>temp1;
//             vector<int>temp2;
//             int i=0;
//             while(i<n-1){
//                 temp1 = nums1[i];
//                 temp2 = nums1[i+1];
//                 if(temp1[0] == temp2[0]){
//                     temp1[1] = temp1[1] + temp2[1];
//                     // ans.push_back(temp1);
//                     nums1[i] = temp1;
//                     nums1.erase(nums1.begin()+i+1 , nums1.begin()+i+1+1);
//                     n = nums1.size();
//                 }
//                 else{
//                     i++;
//                 }
//             }
//             return nums1;
//         }
//     };