#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <math.h>
using namespace std;
int CarRepair(vector<int>nums,int mid);
int main(){
    vector<int>nums={5,1,8}; int car=6; 
    int right=INT_MAX; int ans=INT_MAX; int left=1;

    for(int i=0;i<nums.size();i++)right=min(right,nums[i]);
    right=right*car*car; int mid=0;

    while(left<=right){
        mid=(left+right)/2;
        int sum=CarRepair(nums,mid);
        if(sum>=car){
            ans=min(ans,mid);
            right=mid-1;
        }
        else left=mid+1;
    }

   cout<<ans<<" ";
   return 0;
}

int CarRepair(vector<int>nums,int mid){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=sqrt((mid/nums[i]));
    }
    return sum;
}