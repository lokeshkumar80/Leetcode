// class Solution {
// public:
//     bool isPalindrome(string s) {
//         // understand used method carefully
//         // to convert uppercase characters in string to lowercase
//         transform(s.begin(), s.end(), s.begin(), ::tolower) ;
//         // removing of all non alphanumeric characters from string
//         s.erase(remove_if(s.begin(), s.end(), 
//                 [](char c) { return !::isalnum(c); }), s.end());
//         int n = s.size();
//         int start = 0;
//         int end = n-1;
//         while(start<=end){
//             if(s[start] == s[end]){
//                 start++;
//                 end--;
//             }
//             else {
//                 return false;
//             }
//         }
//         // if we are coming out of this loop it means it is pallindrome
//         return true;
//     }
// };