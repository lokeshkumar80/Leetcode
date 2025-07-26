// class Solution {
// public:

//     int findSmallerFibonum(int k){
//         int a = 0;
//         int b = 1;
//         while(b<=k){
//             int temp = b;
//             b = a+b;
//             a = temp;
//         }
//         return a;
//     }

//     int findMinFibonacciNumbers(int k) {
//         int count = 0;
//         while(k){
//             int a = findSmallerFibonum(k);
//             k = k-a;
//             count++;
//         }
//         return count;
//     }
// };