#include<iostream>
#include<vector>
using namespace std ;

    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int s = 0;
        int e = n-1;
        int mid = s + (e-s)/2 ;

        // // Code 1 : This code is wrong but gives right answer and also accepted by leetcode
        // while(s<=e){
        //     if(arr[mid]<arr[mid+1]){
        //         // move right
        //         s = mid + 1;
        //     }
        //     else{
        //         //move left // bcz of this condition we can lost peak element if it was on mid
        //         e = mid - 1;
        //     }
        //     mid = s + (e-s)/2; // This code is giving right answer just bcz of this type of computation of mid ...
        //     // mid = (s+e)/2; // will give wrong answer ...
        // }
        // return mid;

        // Code 2:
        while(s<e){
            if(arr[mid]<arr[mid+1]){
                // move right
                s = mid + 1;
            }
            else{
                //stay on mid ( because peak can also be on mid)
                e = mid;
            }
            mid = s + (e-s)/2;
        }
        // return s; This will also give right ans for code 2
        // return e; This will also give right ans for code 2
        return mid;
    }

int main()
{
    vector<int>arr = {1, 2, 25, 50, 15, 8, 5};
    int finalans = peakIndexInMountainArray(arr);
    cout<<finalans<<endl;
    int s = 3;
    int e = 2;
    int mid = s + (e-s)/2;
    int mid2 = (s+e)/2;
    cout<<"First type of computation: "<<mid<<endl;
    cout<<"second type of computation: "<<mid2<<endl;

    return 0;
}