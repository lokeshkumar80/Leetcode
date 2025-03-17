// class Solution {
//     public:
//         bool repeatedSubstringPattern(string s) {
//             int n = s.length();
    
//     // If n (length of string) is 1, then the string is trivially constructed from itself no need to appending multiple copies.. so it returs false...
//     // also no need to if condition separately as in default case it returns false
//             // if(n==1){
//             //     return false;
//             // }
        
//             for (int k = 1; k <= n / 2; ++k) {
//                 if (n % k == 0) { // k must divide n evenly
//                     string substring = s.substr(0, k);
//                     string constructed;
                    
//                     for (int i = 0; i < n / k; ++i) {
//                         constructed += substring;
//                     }
                    
//                     if (constructed == s) {
//                         return true;
//                     }
//                 }
//             }
//             return false;
//         }
//     };