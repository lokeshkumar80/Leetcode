// class Solution {
//     public:
//         string decodeMessage(string key, string message) {
//             string uniqueinkey = "";
//             string ans = "";
//             int n = key.length();
//             int m = message.length();
//             int i = 0;
//             while(i<n){
//                 if( key[i]!=' ' && uniqueinkey.find(key[i]) == string::npos ){
//                     uniqueinkey.push_back(key[i]);
//                 }
//                 i++;
//             }
//             int j = 0;
//             int index;
//             while(j<m){
//                 if(message[j]!=' '){
//                     index = uniqueinkey.find(message[j]);
//                     ans.push_back('a'+index);
//                 }
//                 else{
//                     ans.push_back(message[j]);
//                 }
//                 j++;
//             }
//             return ans;
//         }
//     };