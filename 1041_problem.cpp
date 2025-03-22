// class Solution {
//     public:
//         bool isRobotBounded(string instructions) {
//             int n = instructions.length();
//             vector<int>origin = {0, 0}; // let origin as vector ...
//             char direction = 'N';
//             int i=0;
//             int count=1;
//             while(i<n){
//                 if(instructions[i]=='L' && direction == 'N'){
//                     direction = 'W';
//                 }else if(instructions[i]=='R' && direction == 'N'){
//                     direction = 'E';
//                 }else if(instructions[i]=='L' && direction == 'W'){
//                     direction = 'S';
//                 }else if(instructions[i]=='R' && direction == 'W'){
//                     direction = 'N';
//                 }else if(instructions[i]=='L' && direction == 'S'){
//                     direction = 'E';
//                 }else if(instructions[i]=='R' && direction == 'S'){
//                     direction = 'W';
//                 }else if(instructions[i]=='L' && direction == 'E'){
//                     direction = 'N';
//                 }else if(instructions[i]=='R' && direction == 'E'){
//                     direction = 'S';
//                 }else if(instructions[i]=='G' && direction == 'N'){
//                     origin[1] = origin[1] + 1; // y - axis , move up
//                 }else if(instructions[i]=='G' && direction == 'W'){
//                     origin[0] = origin[0] - 1; // x - axis , move left
//                 }else if(instructions[i]=='G' && direction == 'S'){
//                     origin[1] = origin[1] - 1; // y - axis , move down
//                 }else if(instructions[i]=='G' && direction == 'E'){
//                     origin[0] = origin[0] + 1; // x - axis, move right
//                 }
//                 i++;
//                 // robot performs the instructions given in order and repeats them forever 
//                 // so we can follow the same instructions string again and again untill robot reach the origin once or the use of instruction string becomes more than n*n times (we assucme it like infinity)
//                 if(i>=n && count<=n*n){
//                     if(origin[0]!=0 || origin[1]!=0){
//                         count++;
//                         i=0;
//                     }
//                 }
//             }
    
//             if(origin[0]==0 && origin[1]==0){
//                 return true;
//             }
//             else{
//                 return false;
//             }
//         }
//     };