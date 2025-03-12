// class Solution {
//     public:
//     // creating a function as described in the question...
//         int signFunc(int product){
//             return product;
//         }
    
//         int arraySign(vector<int>& nums) {
//             int n = nums.size();
//             int product = 1;
//             int i=0;
//             while(i<n){
//                 if(nums[i]>0){
//                     product *= 1;
//                 }else if(nums[i]<0){
//                     product *= (-1);
//                 }else{
//                     product = 0;
//                     break;
//                 }
//                 i++;
//             }
//             return signFunc(product);
//         }
//     };