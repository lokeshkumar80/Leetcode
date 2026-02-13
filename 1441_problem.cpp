// class Solution {
// public:
//     vector<string> buildArray(vector<int>& target, int n) {
//         vector<string>arr;
//         stack<int>s;

//         int i=0;
//         int j=1;

//         while(s.size() < target.size()){

//             s.push(j);
//             arr.push_back("Push");

//             if(s.top() != target[i]){
//                 // if we are here means we have to stay at same index in next cycle
//                 s.pop();
//                 arr.push_back("Pop");
//             }else{
                    // bcz if(true) case m index increase n ho..
//                 i++;
//             }
//             j++;
//         }
//         return arr;
//     }
// };