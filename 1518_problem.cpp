// class Solution {
// public:
//     int numWaterBottles(int numBottles, int numExchange) {
//         int totaldrink = numBottles;

//         if(numBottles < numExchange){
//             return totaldrink;
//         }

//         while(true){
//             int n = numBottles / numExchange ;
//             totaldrink += n;
//             int r = numBottles % numExchange;
//             numBottles = n + r;

//             if(n==0){
//                 break;
//             }
//         }
//         return totaldrink;
//     }
// };