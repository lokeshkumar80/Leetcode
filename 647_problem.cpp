// class Solution {
//     public:
    
//         int expand(string s, int i, int j){
//             int count = 0;
//             while(i>=0 && j<s.length() && s[i] == s[j]){
//                 count++;
//                 i--;
//                 j++;
//             }
//             return count;
//         }
    
//         int countSubstrings(string s) {
//             int TotalCount = 0;
//             int countoddans = 0;
//             int countevenans = 0;
//             for(int centre = 0; centre < s.length(); centre++){
//                 // for odd length palindromes
//                 countoddans = expand(s, centre, centre);
//                 // for even length palindromes
//                 countevenans = expand(s, centre, centre+1);
//                 // total palindromes
//                 TotalCount = TotalCount + countoddans+countevenans ;
//             }
//             return TotalCount;
//         }
//     };