// class Solution {
// public:
// //here pivot index --> index of largest element in given rotated sorted(ascending) array..
//     int findPivotIndex(vector<int>& arr) {
//         int n = arr.size();
//         int s = 0;
//         int e = n-1;
//         int mid = s + (e-s)/2;

//         while(s <= e) {
//             //corner case
//             if(s == e) {
//                 //single element
//                 return s;
//             }
//             // mid + 1 < n and mid - 1 >= 0  are important conditions that index should be in range 
//             if(mid+1 < n && arr[mid] > arr[mid+1])
//                 return mid;
//             else if(mid-1 >=0 && arr[mid] < arr[mid-1])
//                 return mid-1;
//             else if(arr[s] > arr[mid] ) 
//                 e = mid - 1;
//             else 
//                 s = mid + 1;
            
//             mid = s + (e-s)/2;
//         }
//         return -1;

//     }

//     int binarySearch(vector<int>& arr, int s, int e, int target) {
//         int mid = s + (e-s)/2;
//         while(s<=e) {
//             if(arr[mid] == target) {
//                 return mid;
//             }
//             if(target > arr[mid]) {
//                 s = mid + 1;
//             }
//             else {
//                 e = mid - 1;
//             }
//             mid = s + (e-s)/2;
//         }
//         return -1;
//     }


//     int search(vector<int>& nums, int target) {
//         int pivotIndex = findPivotIndex(nums);
//         // cout << "Pivot Index us: " << pivotIndex << endl;
//         int n = nums.size();
//         int ans = -1; // In case of target not found

//         //search in A
//         if(target >= nums[0] && target <= nums[pivotIndex]) {
//             ans = binarySearch(nums, 0, pivotIndex, target);
//         }
//         else {
//             ans = binarySearch(nums, pivotIndex+1, n-1, target);
//         }
//         return ans;
//     }
// };