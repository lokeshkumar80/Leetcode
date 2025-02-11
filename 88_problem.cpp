// class Solution {
//     public:
//         void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//             // understand question carefully 
//             // in question given size of nums1 is m+n but last n elements are zeroes
//             // and size of nums2 is n so put nums2 in nums1 from m to m+n-1 
//             // and then sort nums1 
//             // and this sorted nums1 containing m+n elements is the output 
            
//             int index = 0;
//             for(int i=m ; i< m+n ; i++){
//                 nums1[i] = nums2[index];
//                 index++;
//             }
            
//             // now sort nums1
//             sort(nums1.begin(), nums1.end());
//         }
//     };