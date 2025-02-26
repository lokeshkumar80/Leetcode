// class Solution {
//     public:
//         string removeDuplicates(string s, int k) {
//             string ans = "";
//             int n = s.length();
//             int index = -1; // for handling the case of last index to be checked...
//             while(index<n){
//                 if(ans.length()>=k ){
//                     int count = k;
//                     int flag = 1;
//                     while(count>1){
//                         if(ans[ans.length()-count] == ans[ans.length() - (count-1)]){
//                             count--;
//                         }
//                         else{
//                             flag = 0;
//                             break;
//                         }
//                     }
//                     if(flag){
//                         ans.erase(ans.length()-k, k);
//                     }
//                 }
//                 index++;
//                 if(index<n){
//                     ans.push_back(s[index]);
//                 }
//             }
//             return ans;
//         }
//     };