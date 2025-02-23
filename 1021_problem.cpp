// class Solution {
//     public:
//         string removeOuterParentheses(string s) {
//             // All inputs are valid strings here ....
//             int n = s.length();
//             vector<string>ans;
//             stack<char>check;
//             string temp = "";
//             int i=0;
//             while(i<n){
//                 if(s[i]=='('){
//                     check.push(s[i]);
//                 }
//                 else if(!check.empty() && check.top() == '(' ){
//                     check.pop();
//                 }
    
//                 if(!check.empty()){
//                     temp.push_back(s[i]);
//                 }
//                 else{
//                     temp.push_back(s[i]);
//                     ans.push_back(temp);
//                     temp = "";
//                 }
//                 i++;
//             }
    
//             int m = ans.size();
//             int j = 0;
//             string ansstring = "";
//             while(j<m){
//                 temp = ans[j];
//                 temp.erase(temp.begin());
//                 temp.pop_back();
//                 ansstring += temp;
//                 j++;
//             }
//             return ansstring;
//         }
//     };