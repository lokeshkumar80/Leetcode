// class Solution {
//     public:
//         bool judgeCircle(string moves) {
//             int n = moves.length();
//             int i=0;
//             vector<int>origin = {0, 0};
//             while(i<n){
//                 if(moves[i]=='R'){
//                     origin[0] = origin[0]+1;
//                 }else if(moves[i]=='L'){
//                     origin[0] = origin[0]-1;
//                 }else if(moves[i]=='U'){
//                     origin[1] = origin[1]+1;
//                 }else if(moves[i]=='D'){
//                     origin[1] = origin[1]-1;
//                 }
//                 i++;
//             }
//             if(origin[0]==0 && origin[1]==0){
//                 return true;
//             }
//             else{
//                 return false;
//             }
//         }
//     };