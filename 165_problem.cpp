// class Solution {
// public:

//     void CREATEINTARRAY(string version, vector<int> &intversion){
//         string ch = "";
//         int m = version.length();
//         for(int i=0; i<m; i++){
//             if(version[i]!='.'){
//                 ch += version[i];
//             }
//             if(version[i] == '.' || i == m-1){
//                 int v = stoi(ch);
//                 intversion.push_back(v);
//                 ch = "";
//             }
//         }
//     }

//     int compareVersion(string version1, string version2) {

//         // create two vector int arrays ...
//         vector<int>intversion1;
//         vector<int>intversion2;

//         // call CREATEINTARRAY for converting string to integer
//         CREATEINTARRAY(version1, intversion1);
//         CREATEINTARRAY(version2, intversion2);

//         int m = intversion1.size();
//         int n = intversion2.size();

//         if(m>=n){
//             for(int i=0; i<(m-n); i++){
//                 intversion2.push_back(0);
//             }
//         }else{
//             for(int i=0; i<(n-m); i++){
//                 intversion1.push_back(0);
//             }
//         }

//         for(int i=0; i<intversion1.size(); i++){
//             if(intversion1[i]>intversion2[i]){
//                 return 1;
//             }else if(intversion1[i]<intversion2[i]){
//                 return -1;
//             }
//         }
        
//         // otherwise ....
//         return 0;
//     }
// };