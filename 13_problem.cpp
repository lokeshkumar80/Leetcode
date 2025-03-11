// class Solution {
//     public:
//         int romanToInt(string s) {
//             int n = s.length();
//             int i=n-1;
//             stack<char>rs;
//             rs.push(s[n-1]);
//             int sum=0;
//             while(i>=0){
//                 if(s[i]=='I' && (rs.top()=='V' || rs.top()=='X')){
//                     sum -= 1;
//                     rs.push(s[i]);
//                 }else if(s[i]=='I'){
//                     sum += 1;
//                     rs.push(s[i]);
//                 }else if(s[i]=='V'){
//                     sum += 5;
//                     rs.push(s[i]);
//                 }else if(s[i]=='X' && (rs.top()=='L' || rs.top()=='C')){
//                     sum -= 10;
//                     rs.push(s[i]);
//                 }else if(s[i]=='X'){
//                     sum += 10;
//                     rs.push(s[i]);
//                 }else if(s[i]=='L'){
//                     sum += 50;
//                     rs.push(s[i]);
//                 }else if(s[i]=='C' && (rs.top()=='D' || rs.top()=='M')){
//                     sum -= 100;
//                     rs.push(s[i]);
//                 }else if(s[i]=='C'){
//                     sum += 100;
//                     rs.push(s[i]);
//                 }else if(s[i]=='D'){
//                     sum += 500;
//                     rs.push(s[i]);
//                 }else if(s[i]=='M'){
//                     sum += 1000;
//                     rs.push(s[i]);
//                 }
//                 i--;
//             }
//             return sum;
//         }
//     };