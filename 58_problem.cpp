// class Solution {
//     public:
//         int lengthOfLastWord(string s) {
//             int n = s.length();
//             if(n==1){
//                 if(s[0]!=' '){
//                     return n;
//                 }
//                 else{
//                     return 0;
//                 }
//             }
//             int i=n-1;
//             bool c = false;
//             string ans="";
//             while(i>=0){
//                 if(!c){
//                     if(s[i]==' '){i--;continue;}
//                     c = true;
//                     ans+=s[i];
//                     i--;
//                 }else{
//                     if(s[i]==' ')break;
//                     ans+=s[i];
//                     i--;
//                 }
//             }
//             return ans.length();
//         }
//     };