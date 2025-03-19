// class Solution {
//     public:
//         int calPoints(vector<string>& op) {
//             int n = op.size();
//             stack<int>curr;
//             stack<int>ans;
//             int a;
//             int b;
//             int insertval;
//             int numval;
//             string ch;
//             int i=0;
//             while(i<n){
//                 if(op[i]=="+"){
//                     a = curr.top();
//                     curr.pop();
//                     b = curr.top();
//                     curr.pop();
//                     insertval = a+b;
//                     // remind the order of pop and then try to understand the order of push in the stack
//                     curr.push(b);
//                     curr.push(a);
//                     curr.push(insertval);
//                 }else if(op[i]=="D"){
//                     a = curr.top();
//                     b = 2*a;
//                     curr.push(b);
//                 }else if(op[i]=="C"){
//                     curr.pop();
//                 }else{
//                     ch = op[i];
//                     // asciival = static_cast<int>(ch); // this is for char to int
//                     numval = stoi(ch); // this for string to int 
//                     cout<<numval<<" ";
//                     curr.push(numval);
//                 }
//                 i++;
//             }
    
//             int sum = 0;
//             while(!curr.empty()){
//                 // a = curr.top();
//                 sum = sum + curr.top();
//                 curr.pop();
//             }
//             return sum;
//         }
//     };