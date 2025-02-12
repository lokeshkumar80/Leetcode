// // This Code is also Submitted in python by myself
// Python Code
// class Solution(object):
//     def plusOne(self, digits):
//         # this code is in python bcz in c++ we can't store 100 digit length no 
//         n = len(digits)
//         big_num = 0
        
//         # Calculate number using place value concept
//         for i in range(n):
//             big_num += digits[i] * (10 ** (n - 1 - i))
        
//         # Increment by one
//         big_num += 1
        
//         # Convert number back to digit list
//         ans = [int(digit) for digit in str(big_num)]
        
//         return ans

// C++ Code :
// class Solution {
//     public:
//         vector<int> plusOne(vector<int>& digits) {
//             vector<int>ans;
//             int n = digits.size();
//             int value;
//             // Code 1 : Logic is correct but not run in c++
//         //  //  This logic is not useful bcz we can't store number that can't be represent in max. 128 bits in  c++
//         //     // Calculate no. using place value concept
//         //      __uint128_t bigNum = 0;
//         //     for(int i=n-1; i>=0; i--){
//         //         bigNum += digits[i]*pow(10, ((n-1) - i)) ;
//         //     }
//         //     // increment by one
//         //     bigNum = bigNum + 1;
    
//         //     // now create array with the digits of bigNum 
//         //     int digit;
//         //     while(bigNum!=0){
//         //         digit =bigNum % 10 ;
//         //         ans.push_back(digit);
//         //         bigNum = bigNum / 10 ;
//         //     }
    
//         //     // reverse the array to get correct order of digits
//         //     int m = ans.size();
//         //     int s = 0;
//         //     int e = m-1;
//         //     while(s<=e){
//         //         swap(ans[s], ans[e]);
//         //         s++;
//         //         e--;
//         //     }
//         // return ans;
    
//     // // Code 2 : submitted successfully....
//             for(int i=n-1; i>=0; i--){
//                 if(digits[i]<9){
//                     value = digits[i];
//                     digits[i] = value+1;
//                     break;
//                 }
//                 else{
//                     digits[i] = 0;
//                     if(i == 0){
//                         break;
//                     }
//                 }
//             }
//             if(digits[0]==0){
//                 ans.push_back(1);
//                 ans.insert(ans.end(), digits.begin(), digits.end());
//                 return ans;
//             }
//             else{
//                 ans = digits;
//                 return ans;
//             }
//         }
//     };