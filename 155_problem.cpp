// class MinStack {
// public:

// // create a vector of pair
// // pair.first = val
// // pair.second = min

//     vector<pair<int, int>>st;

//     MinStack() {
 
//     }
    
//     void push(int val) {
//         pair<int, int>p;
//         if(st.empty()){
//             p.first = val;
//             p.second = val;
//             st.push_back(p);
//         }else{
//             p.first = val;
//             // vector ka rightmost element ...
//             int oldmin = st.back().second; 
//             p.second = min(oldmin, val);
//             st.push_back(p);
//         }
//     }
    
//     void pop() {
//         st.pop_back();
//     }
    
//     int top() {
//         pair<int, int> rightmostpair = st.back();
//         return rightmostpair.first;
//     }
    
//     int getMin() {
//         pair<int, int> rightmostpair = st.back();
//         return rightmostpair.second;
//     }
// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(val);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */