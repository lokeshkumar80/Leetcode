// class Solution {
//     public:
    
//         char checkrows(vector<vector<char>>sq){
//             int i, j;
//             int flag = 1;
//             for(i=0; i<3; i++){
//                 flag = 1;
//                 for(j=0; j<3; j++){
//                     if(sq[i][j]=='X' || sq[i][j]=='a'){
//                         flag = 0;
//                         break;
//                     }
//                 }
//                 if(flag){
//                     return 'O';
//                 }
//                 flag = 1;
//                 for(j=0; j<3; j++){
//                     if(sq[i][j]=='O' || sq[i][j]=='a'){
//                         flag = 0;
//                         break;
//                     }
//                 }
//                 if(flag){
//                     return 'X';
//                 }
//             }
//             return 'a';
//         }
    
//         char checkcols(vector<vector<char>>sq){
//             int i, j;
//             int flag = 1;
//             for(i=0; i<3; i++){
//                 flag = 1;
//                 for(j=0; j<3; j++){
//                     if(sq[j][i]=='X'||sq[j][i]=='a'){
//                         flag = 0;
//                         break;
//                     }
//                 }
//                 if(flag){
//                     return 'O';
//                 }
//                 flag = 1;
//                 for(j=0; j<3; j++){
//                     if(sq[j][i]=='O'||sq[j][i]=='a'){
//                         flag = 0;
//                         break;
//                     }
//                 }
//                 if(flag){
//                     return 'X';
//                 }
//             }
//             return 'a';
//         }
    
//         char checkdiags(vector<vector<char>>sq){
//             if(sq[1][1]!='a'){
//                 if(sq[1][1]==sq[0][0] && sq[1][1]==sq[2][2]){
//                     return sq[1][1];
//                 }
//             }
    
//             if(sq[1][1]!='a'){
//                 if(sq[1][1]==sq[0][2] && sq[1][1]==sq[2][0]){
//                     return sq[1][1];
//                 }
//             }
    
//             return 'a';
//         }
    
//         string tictactoe(vector<vector<int>>& moves) {
//             vector<vector<char>>sq = {{'a', 'a', 'a'}, {'a', 'a', 'a'},{'a', 'a', 'a'}};
//             vector<int>temp;
//             int n = moves.size();
//             int a, b;
//             char ch = 'a';
//             for(int i=0; i<n; i++){
//                 temp = moves[i];
//                 a = temp[0];
//                 b = temp[1];
//                 if(i%2 == 0){
//                     sq[a][b] = 'X';
//                 }else{
//                     sq[a][b] = 'O';
//                 }
//                 if(i>=4){ // start checking after 5th move ...
//                     ch =  checkrows(sq);
//                     if(ch=='X'){
//                         return "A";
//                     }else if(ch=='O'){
//                         return "B";
//                     }
//                     ch = checkcols(sq);
//                     if(ch=='X'){
//                         return "A";
//                     }else if(ch=='O'){
//                         return "B";
//                     }
//                     ch = checkdiags(sq);
//                     if(ch=='X'){
//                         return "A";
//                     }else if(ch=='O'){
//                         return "B";
//                     }
//                 }
//             }
    
//             if(n==9){
//                 return "Draw";
//             }else{
//                 return "Pending";
//             }
//         }
//     };