// class Solution {
//     public:
//             // This method leverages the bitwise XOR operation. 
//             // Since every character in s appears in t      
//             //except for one extra, XOR-ing all characters cancels out 
//             // identical pairs, leaving only the added character.
//         char findTheDifference(string s, string t) {
//             char result = 0;
//             for (char c : s){
//                 result ^= c;
//             }
//             for (char c : t) {
//                 result ^= c;
//             }
//             return result;
//         }
//     };