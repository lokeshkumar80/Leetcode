// class Solution {
//     public:
    
//         bool checkpalindrome(string s, int i, int e){
//             while(i<=e){
//                 if(s[i]!=s[e]){
//                     return false;
//                 }
//                 i++;
//                 e--;
//             }
//             return true;
//         }
    
//         bool validPalindrome(string s) {
//            int i = 0;
//            int e = s.length()-1;
//            bool ans1;
//            bool ans2;
//            while(i<=e){
//                 if(s[i]!=s[e]){
//                     ans1 = checkpalindrome(s, i+1, e);
//                     ans2 = checkpalindrome(s, i, e-1);
//                     return ans1 || ans2;
//                 }
//                 else{
//                     i++;
//                     e--;
//                 }
//             }
//             return true;
//         }
//     };