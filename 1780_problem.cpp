// class Solution {
//     public:
//     // POTD Problem : Understand it and solve it again
//         bool checkPowersOfThree(int n) {
//             while (n > 0) {
//                 if (n % 3 == 2)  // If there's a '2' in base-3, return false
//                     return false;
//                 n /= 3;  // Move to the next power
//             }
//             return true;
//         }
//     };