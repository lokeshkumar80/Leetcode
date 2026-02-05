// class Solution {
// public:
// // POTD Problem : understand it and solve it again...
//     int minimumRecolors(string blocks, int k) {

// // // not submitted successfully...
// //         int n = blocks.length();
// //         int L=0;
// //         int R=0;
// //         int count = 0;
// //         int max = 0;
// // // first select max length with consecutive black blocks.....and keep the copy of left and right index of selected component and then expand in both direction ..
// //         for(int i=0; i<n; i++){
// //             if(blocks[i]=='B'){
// //                 count++;
// //                 if(i==n-1){
// //                     if(count>max){
// //                         max = count;
// //                         R = i; // understand it carefully it is last one 
// //                         L = i - max + 1; // as max = R - L + 1
// //                         count = 0;
// //                     }
// //                 }
// //             }
// //             else{
// //                 if(count>max && i-1>=0){
// //                     max = count;
// //                     R = i-1;
// //                     L = i - max;
// //                     count = 0;
// //                 }
// //                 else{
// //                     count = 0;
// //                 }
// //             }
// //         }

// //         int Opcount = 0;
// //         while(max<k){
// //             if(R+1 < n && blocks[R+1]=='W'){
// //                 blocks[R+1] = 'B';
// //                 R++;
// //                 max++;
// //                 Opcount++;
// //             }
// //             else if(R+1<n){
// //                     max++;
// //             }

// //             if(max<k){
// //                 if(L-1>=0 && blocks[L-1] == 'W'){
// //                     blocks[L-1] = 'B';
// //                     L--;
// //                     max++;
// //                     Opcount++;
// //                 }
// //                 else if(L-1>=0){
// //                     max++;
// //                 }
// //             }

// //             // for n=1
// //             if(n==1 && k==1){
// //                 if(blocks[0]=='W'){
// //                     blocks[0] = 'B';
// //                     max++;
// //                     Opcount++;
// //                 }
// //                 else{
// //                     max++;
// //                 }
// //             }

// //         }
// //         return Opcount;

// // Code : 2
//     int n = blocks.size();
//     int min_ops = 0, curr_ops = 0;

//     // Count 'W' in the first window of size k
//     for (int i = 0; i < k; i++) {
//         if (blocks[i] == 'W') {
//             curr_ops++;
//         }
//     }
//     min_ops = curr_ops;

//     // Sliding window to check remaining parts of the string
//     for (int i = k; i < n; i++) {
//         if (blocks[i - k] == 'W') curr_ops--;  // Remove leftmost block
//         if (blocks[i] == 'W') curr_ops++;      // Add rightmost block
//         min_ops = min(min_ops, curr_ops);      // Update the minimum
//     }

//     return min_ops;

//     }
// };