// class Solution {
//     public:
//         bool canMakeArithmeticProgression(vector<int>& arr) {
//             sort(arr.begin(), arr.end());
//             int n = arr.size();
//             int i=0;
//             int diff = arr[i+1]-arr[i];
//             int diffnew;
//             while(i<n-1){
//                 diffnew = arr[i+1]-arr[i];
//                 if(diffnew!=diff){
//                     return false;
//                 }
//                 i++;
//             }
//             return true;
//         }
//     };