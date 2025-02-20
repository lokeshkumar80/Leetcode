// class Solution {
//     public:
//         string removeDuplicates(string s) {
//             // // Code : 1 : 104/106 cases are passed but gives memory exceeded ...
//             // int n = s.length();
//             // int flag = 0;
//             // int i=0;
//             // if(n<=1){
//             //     return s;
//             // }
//             // while(i<n-1){
//             //     if(s[i]==s[i+1]){
//             //         flag = 1;
//             //         s.erase(s.begin()+i,s.begin()+i+2);
//             //         n = s.length();
//             //     }
//             //     else{
//             //         i++;
//             //     }
    
//             // }
//             // if(flag){
//             //    return removeDuplicates(s);
//             // }
//             // return s;
    
//             // Code 2 :
//             string ans = "";
//             int index = 0;
//             while(index < s.length()){
//                 if(ans.length() > 0 && ans[ans.length()-1] == s[index]){
//                     // pop
//                     ans.pop_back();
//                 }
//                 else{
//                     //push
//                     ans.push_back(s[index]);
//                 }
//                 index++;
//             }
//             return ans; 
//         }
//     };