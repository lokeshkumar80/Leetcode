// class Solution {
//     public:
//         string toLowerCase(string s){
//     // code 1 : runs successfully...
//             // int n = s.length();
//             // string ans = "";
//             // char ch;
//             // char ansch;
//             // int numVal;
//             // int newnumVal;
//             // for(char ch : s){
//             //     if(isalpha(ch)){
//             //         if(isupper(ch)){
//             //         numVal = static_cast<int>(ch);
//             //         newnumVal = numVal + 32;
//             //         ansch = (char)newnumVal;
//             //         ans+=ansch;
//             //         }
//             //         else{
//             //             ans+=ch;
//             //         }
//             //     }else{
//             //         ans+=ch;
//             //     }
//             // }
//             // return ans;
    
//     // Code 2 : 
//     // This approach is efficient and works for both uppercase and lowercase letters while leaving other characters unchanged
    
//             int n = s.length();
//             int i=0;
//             char c;
//             while(i<n){
//                 c = s[i];
//                 c = tolower(c);
//                 s[i] = c;
//                 i++;
//             }
//             return s;
//         }
//     };