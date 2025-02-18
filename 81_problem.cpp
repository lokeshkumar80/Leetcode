    #include<iostream>
    #include<vector>
    using namespace std;

        // In this problem same code of problem 33 runs for 278 cases and then after that I start changes in
        // findPivotIndex function according to the remaining special cases ...and all other functions code is remains the same ...
        
            //here pivot index --> index of largest element in given rotated sorted(ascending) array..
            int findPivotIndex(vector<int>& arr) {
                int n = arr.size();
                int s = 0;
                int e = n-1;
                int mid = s + (e-s)/2;
                int a;
                int flag = 1;
        
                while(s <= e) {
                    //corner case
                    if(s == e) {
                        //single element
                        return s;
                    }
                    // mid + 1 < n and mid - 1 >= 0  are important conditions that index should be in range 
                    if(mid+1 < n && arr[mid] > arr[mid+1])
                        return mid;
                    else if(mid-1 >=0 && arr[mid] < arr[mid-1])
                        return mid-1;
                    else if(arr[s] > arr[mid] ) 
                        e = mid - 1;
                    else if(arr[s] < arr[mid])
                        s = mid + 1;
                    else{ // and this else case is for arr[s] = arr[mid]
                    // this else case is very important   to understand for special cases 
                    // visualize , write and understand those cases very carefully ....
                        a = s;
                        while(a<=mid){
                            a++;
                            if(arr[a]<arr[mid]){
                                return a-1;
                            }
                            else if(arr[a] > arr[mid]){
                                return a;
                            }
                        }
                        s = mid+1;
                    }
                    mid = s + (e-s)/2;
                }
                return mid;
            }
        
            bool binarySearch(vector<int>& arr, int s, int e, int target) {
                int mid = s + (e-s)/2;
                while(s<=e) {
                    if(arr[mid] == target) {
                        return true;
                    }
                    if(target > arr[mid]) {
                        s = mid + 1;
                    }
                    else {
                        e = mid - 1;
                    }
                    mid = s + (e-s)/2;
                }
                return false;
            }
        
            bool search(vector<int>& nums, int target) {
                int pivotIndex = findPivotIndex(nums);
                // cout << "Pivot Index us: " << pivotIndex << endl;
                int n = nums.size();
                bool ans = false; // In case of target not found
        
                //search in A
                if(target >= nums[0] && target <= nums[pivotIndex]) {
                    ans = binarySearch(nums, 0, pivotIndex, target);
                }
                else {
                    ans = binarySearch(nums, pivotIndex+1, n-1, target);
                }
                return ans;
            }
        

        int main(){
            vector<int>nums = {1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1};
            int target = 2;
            bool ans = search(nums, target);
            if(ans){
                cout<<"true"<<endl;
            }
            else{
                cout<<"false"<<endl;
            }
    
            return 0;
        }