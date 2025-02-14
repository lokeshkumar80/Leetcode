// class Solution {
//     public:
//         void rotate(vector<int>& nums, int k) {
//             // // code 1 : in O(n) extra space for temp vector
//             // int n = nums.size();
//             // vector<int> temp(n);
//             // for(int index = 0; index<n; index++){
//             //     int newindex = (index+k)%n ;
//             //     temp[newindex] = nums[index];
//             // }
//             // nums = temp;
    
//             // // Code 2 : in O(1) space that is in-place
//             int n = nums.size();
//             k = k % n;  // Handle cases where k >= n
    
//             // Reverse the entire array
//             reverse(nums.begin(), nums.end());
    
//             // Reverse first d elements
//             reverse(nums.begin(), nums.begin() + k);
    
//             // Reverse remaining n-d elements
//             reverse(nums.begin() + k, nums.end());
//         }
//     };