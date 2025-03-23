// class Solution {
//     public:
//         int maximumWealth(vector<vector<int>>& accounts) {
//             int n = accounts.size(); // no of rows that is the no of customers....
//             int m = accounts[0].size();
//             stack<int>ans;
//             int wealth = 0;
//             ans.push(0);
//             int i=0;
//             while(i<n){
//                 wealth = 0;
//                 for(int j=0; j<m; j++){
//                     wealth += accounts[i][j];
//                 }
//                 if(wealth > ans.top()){
//                     ans.push(wealth);
//                 }
//                 i++;
//             }
//             return ans.top();
//         }
//     };