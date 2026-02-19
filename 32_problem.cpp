// class Solution {
// public:
//     int longestValidParentheses(string s) {

//         // Create Stack...
//         stack<int>st;

//         // initially add -1 to stack
//         st.push(-1);
//         int maxlen = 0;

//         // traverse string
//         for(int i=0; i<s.length(); i++){
//             char ch = s[i];

//             // opening bracket 
//             if(ch == '('){
//                 st.push(i); // push index 
//             }else{ // ch == ')' closing bracket // then pop 
//                 st.pop();
                
//                 // check stack empty ? if yes then push index of closing bracket ...It imp condition
//                 if(st.empty()){ 
//                     st.push(i);
//                 }else{
//                     // not empty --> calculate length
//                     int len = i - st.top();
//                     maxlen = max(maxlen, len);
//                 }
//             }
//         }

//         return maxlen;
//     }
// };