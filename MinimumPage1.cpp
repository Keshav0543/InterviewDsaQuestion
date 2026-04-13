#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int IsValid(int mid,int k,vector<int>&nums);
int main(){
    vector<int>nums={7, 2, 5, 10, 8}; int k=2; 
    int left=0; int right=0; int ans=INT_MAX;
    for(int i=0;i<nums.size();i++){
        left=max(left,nums[i]);
        right+=nums[i];
    }

    while(left<=right){
        int mid=(left+right)/2;
        if(IsValid(mid,k,nums)){
            ans=min(ans,mid);
            right=mid-1;
        }
        else {
            left=mid+1;
        }
    }
    cout<<ans<<" ";
    return 0;
}

int IsValid(int mid,int k,vector<int>&nums){
    int count=0; int ind=0; int s=1;
    while(ind<nums.size()){
        count+=nums[ind];
        
        if(count>mid){
            s=s+1;
            count=nums[ind];
        }
        ind++;
    }
    if(s<=k)return 1;
    return 0;
}