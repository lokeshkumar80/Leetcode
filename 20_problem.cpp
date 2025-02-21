// class Solution {
//     public:
//         bool isValid(string s) {
//             string ans = "";
//             int i=0;
//             while(i<=s.length()-1){
//                 if(s[i]=='(' || s[i]=='{' || s[i]=='['){
//                     ans.push_back(s[i]);
//                 }
//                 else if(ans.length()>=1){
//                     if((ans[ans.length()-1]=='(' && s[i]==')') || (ans[ans.length()-1]=='{' && s[i]=='}') || (ans[ans.length()-1]=='[' && s[i]==']') ){
    
//                         ans.pop_back();
//                     }
//                     else{
//                         return false;
//                     }
//                 }
//                 else{
//                     return false;
//                 }
//                 // updation of index 
//                 i++;
//             }
    
//             // if we are out of the loop and string ans is empty that means string s is balanced ...
    
//             if(ans.length()!=0){
//                 return false;
//             }
//             else{
//                 return true;
//             }
//         }
//     };