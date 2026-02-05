// class Solution {
// public:
//     bool isPalindrome(int x) {
//         string str = to_string(x);
//         int n = str.size();
//         int start = 0;
//         int end = n-1;
//         while(start<=end){
//             if(str[start] == str[end]){
//                 start++;
//                 end--;
//             }
//             else {
//                 return false;
//             }
//         }
//         // if we are coming out of this loop it means it is pallindrome
//         return true;
//     }
// };