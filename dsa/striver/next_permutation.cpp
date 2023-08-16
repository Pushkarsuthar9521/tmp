#include<bits/stdc++.h>
using namespace std;

 void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int index=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1])
            {
                index=i;
                break;
            }
        }
         if(index==-1)
        {
            reverse(nums.begin(),nums.end());
        }

        for(int i=n-1;i>index;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }


        reverse(nums.begin() + index + 1 ,nums.end());
       

        for(auto x : nums){
            cout<<x;
        }
}

int main(){
    vector<int>arr={1,2,3};
    nextPermutation(arr);
}