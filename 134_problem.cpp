// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         int n = gas.size();
//         int start = 0;
//         long long tank = 0;
//         long long totalcost = 0;
        
//         for(int i=0; i<n; i++){
//             long long diff = gas[i] - cost[i];
//             totalcost += diff; // handles the circular check for complete round with doing 
//                                // circular access
//             tank += diff;
            
//             if(tank<0){
//                 start = i + 1; // if having less fuel than cost then start will not be before or 
//                                 // at i;
//                 tank = 0;
//             }
//         }
        
//         if(totalcost>=0){
//             return start;
//         }else{
//             return -1;
//         }
//     }
// };