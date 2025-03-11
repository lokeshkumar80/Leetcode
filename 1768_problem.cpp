// class Solution {
//     public:
//         string mergeAlternately(string word1, string word2) {
//             string ans = "";
//             int n = word1.length();
//             int m = word2.length();
//             int maximum = max(n, m);
//             int i=0;
//             while(i<maximum){
//                 if(i<n){
//                     ans += word1[i];
//                 }
//                 if(i<m){
//                     ans += word2[i];
//                 }
//                 i++;
//             }
//             return ans;
//         }
//     };