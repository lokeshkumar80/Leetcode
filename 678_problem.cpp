// class Solution {

// public:
//     bool checkValidString(string s) {
//         // low  → minimum possible open brackets
//         // high → maximum possible open brackets

//         int low = 0, high = 0;

//         for(char c : s) {

//             if(c == '(') {
//                 low++;
//                 high++;
//             }
//             else if(c == ')') {
//                 if(low > 0) low--;
//                 high--;
//             }
//             else { // '*'
//                 //low = best case (we use * as ) or empty to reduce opens) 
//                 //high = worst case (we use * as ( to increase opens)
//                 if(low > 0) low--;  // treat '*' as ')'
//                 high++;             // treat '*' as '('
//             }

//             if(high < 0) return false;  // too many ')'
//         }

//         return low == 0; // low = minimum possible open brackets left
//                          //If low > 0, even in best case we still have unmatched '('
//                          //So it must be zero.
//     }
// };