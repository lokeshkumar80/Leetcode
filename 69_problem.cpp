// class Solution {
// public:
//     int mySqrt(int x) {
//         int s = 0;
//         int e = x;
//         long long int mid = s + (e-s)/2;  // why int does not store mid ..
//         while(s<=e){
//             if(mid*mid <= x && x<(mid+1)*(mid+1)){
//                 break;
//             }
//             else if(mid*mid > x){
//                 e = mid - 1;
//             }
//             else if(mid*mid < x){
//                 s = mid + 1;
//             }
//             mid = s + (e-s)/2;
//         }
//         return mid;
//     }
// };