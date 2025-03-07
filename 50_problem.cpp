// class Solution {
//     public:
//         double myPow(double x, int n) {
//             if (n == 0) return 1;  // Base case: x^0 = 1
//             if (n < 0) {
//                 x = 1 / x;  // Handle negative exponent by taking reciprocal
//                 if (n == INT_MIN) { // Handle edge case for INT_MIN
//                     n += 1;
//                     x *= x;
//                 }
//                 n = -n;
//             }
    
//             double result = 1.0;
//             while (n) {
//                 if (n % 2)  // If n is odd, multiply result by x
//                     result *= x;
//                 x *= x;  // Square the base
//                 n /= 2;  // Divide exponent by 2
//             }
//             return result;
//         }
//     };