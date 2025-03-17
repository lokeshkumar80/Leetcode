// class Solution {
//     public:
//     // POTD Problem : submitted successfully 
//         bool divideArray(vector<int>& nums) {
//             // using xor operation ...
//             int m = nums.size();
//             int n = m/2 ;
//             int i=0;
//             int xorvalue=0;
    
//             sort(nums.begin(), nums.end());
    
//             while(i<m-1){
//                 xorvalue = nums[i]^nums[i+1];
//                 if(xorvalue!=0){
//                     return false;
//                 }
//                 i = i+2;
//             }
//             return true;
//         }
//     };