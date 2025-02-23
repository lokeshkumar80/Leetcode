// class Solution {
//     public:
//         string reverseWords(string s) {
//             vector<string>check;
//             string temp = "";
//             string ansstring = "";
//             int n = s.length();
//             int flag = 0;
//             int i = 0;
//             while(i<n){
//                 if(s[i]!=' '){
//                     flag = 1;
//                     temp.push_back(s[i]);
//                     if(i==n-1){
//                         check.push_back(temp);
//                     }
//                 }
//                 else if(flag){
//                     check.push_back(temp);
//                     temp = "";
//                     flag = 0;
//                 }
//                 i++;
//             }
    
//             int m = check.size();
//             int j = 0;
//             int e = m-1;
    
//             while(j<=e){
//                 swap(check[j], check[e]);
//                 j++;
//                 e--;
//             }
    
//             int k=0;
//             while(k<m){
//                 ansstring += check[k];
//                 if(k<m-1){
//                     ansstring += ' ';
//                 }
//                 k++;
//             }
//             return ansstring;
//         }
//     };