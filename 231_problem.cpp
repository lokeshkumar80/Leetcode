// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         //edge case
//         if(n<=0){
//             return false;
//         }
//         //Base case
//         if(n==1){
//             return true;
//         // Logic
//         }else if(n%2 == 0){
//             n = n/2;
//             return isPowerOfTwo(n);
//         }else{
//             return false;
//         }
//     }
// };