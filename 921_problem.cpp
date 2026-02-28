// class Solution {
// public:
//     int minAddToMakeValid(string s) {
//         stack<char>st;
//         int mcount = 0;

//         for(int i=0; i<s.length(); i++){
//             char ch = s[i];
//             if(s[i]=='('){
//                 st.push('(');
//             }else{
//                 if(st.empty()){
//                     mcount++; // bcz '(' is required for ')'
//                 }else{
//                     st.pop();
//                 }
//             }
//         }

//         while(!st.empty()){
//             st.pop();
//             mcount++; // bcz ')' is required for remaining '('
//         }
//         return mcount;
//     }
// };