#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int IsValid(int mid, vector<int>&nums, int days);
int main(){
    vector<int>nums={1,2,3,1,1}; int days=4; 
    int ans=INT_MAX;
    int left=0; int right=0;
    for(int i=0;i<nums.size();i++){
        left=max(left,nums[i]);
        right+=nums[i];
    }

    while(left<=right){
        int mid=(left+right)/2;
        if(IsValid(mid,nums,days)){
            ans=min(ans,mid);
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    cout<<ans<<" ";
    return 0;
}

int IsValid(int mid, vector<int>&nums, int days){
    int count=1; int sum=0; int ind=0;
    while(ind<nums.size()){
        sum+=nums[ind];
        if(sum>mid){
            count++;
            sum=nums[ind];
        }
        ind++;
    } 
    if(count<=days)return 1;
    return 0;
}