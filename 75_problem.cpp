#include<iostream>
#include<vector>
using namespace std ;

void sortColors(vector<int>& nums) {
        int countred = 0;
        int countwhite = 0;
        int countblue = 0;
        int index =0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i]==0){
                countred++;
            }
            else if(nums[i]==1){
                countwhite++;
            }
            else{
                countblue++;
            }
        }
        for(int i = countred; i>0; i--){
            nums[index] = 0;
            index++;
        }
        for(int i = countwhite; i>0; i--){
            nums[index] = 1;
            index++;
        }
        for(int i = countblue; i>0; i--){
            nums[index] = 2;
            index++;
        }
    }

    void output(vector<int> nums){
        int n =nums.size();
        for(int i=0; i<n; i++){
            cout<<nums[i]<<" ";
        }
    }

int main()
{
    vector<int>nums = {2,0,2,1,1,0};
    sortColors(nums);
    output(nums);
     return 0;
}