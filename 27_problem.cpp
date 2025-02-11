// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int removeElement(vector<int>& nums, int val) {
//     int n = nums.size();
//     int i=0;
//     int count = 0;
//     int valCounter = n-1;
//     while(i<=valCounter){
//         if(nums[i]==val){
//             count++;
//             swap(nums[i], nums[valCounter]);
//             valCounter--;
//         }
//         else{
//             i++;
//         }
//     }
//         int k = n-count;
//         nums.erase(nums.begin()+k , nums.begin()+n); 
//         // nums.erase(index k included se last element tk so (index of last + 1) that is n-1+1 = n)
//         return nums.size();
// }

// int main(){
//     vector<int>nums = {1,2,3,4,5,6};
//     int val = 7;
//     int ans = removeElement(nums, val);
//     cout<<ans<<endl;
// }

