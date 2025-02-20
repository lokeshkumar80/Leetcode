// class Solution {
//     public:
//         string removeOccurrences(string s, string part) {
//             // using find ...
//             // s.find(part) == string::npos   // it means substring not find in the string
//             // npos = no position found
    
//             while(s.find(part) != string::npos){
//                 s.erase(s.find(part), part.length()); 
//                 // it means erase the substring from first indext of part substring till last 
//                 //index of part substring as we know erase works as s.erase([i , j))
//             }
//             return s;
//         }
//     };