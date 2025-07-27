// class Solution {
// public:

//         // total no of ways to reach nth stair is the sum of the total no of ways to reach at (n-1)th
//         // and (n-2)th bcz at a time only 1 step or 2 steps are allowed..
//         // Base case --> to reach at 0th stair 1 step as it is the initial step(not zero bcz it will be logically incorrect ...there is always a way to reach oth stair also) , for stair 1 there is need
//         // of only 1 step
//         // also no need to include 0th stair as base case ....n=1 and n=2 cam also be base case

// // But here recursion shows TLE

//     // int climbStairs(int n) {
//     //     if(n==1){
//     //         return 1;
//     //     }
//     //     if(n==2){
//     //         return 2;
//     //     }

//     //     int ans = climbStairs(n-1) + climbStairs(n-2);

//     //     return ans;
//     // }

//     int climbStairs(int n) {
//         int a = 1;
//         int b = 2;
//         int ans;
        
//         if(n==1){
//             return a;
//         }
//         if(n==2){
//             return b;
//         }

//         for(int i=0; i<n-2; i++){
//             ans = a+b;
//             a = b;
//             b = ans;
//         }

//         return ans;
//     }
// };