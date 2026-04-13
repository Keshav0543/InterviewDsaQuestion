#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int PagesCount(vector<int>&nums,int left, int right, int k);
bool Isvalid(int mid, int k, vector<int>&nums);
int main(){
    vector<int>nums={7, 2, 5, 10, 8}; int k=2;
    int ans=INT_MAX;
    int left=1; int right=0;
    for(int i=0;i<nums.size();i++){
        right+=nums[i];
        left=max(left,nums[i]);
    }
    ans=PagesCount(nums,left,right,k);
    cout<<ans<<" ";
    return 0;
}

int PagesCount(vector<int>&nums,int left, int right, int k){
    int ans=INT_MAX;
    while(left<=right){
        int mid=(left+right)/2;
        bool result=Isvalid(mid,k,nums);
        if(result){
            ans=min(ans,mid);
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return ans;
}


bool Isvalid(int mid, int k, vector<int>&nums){
    int count=1; int curr_count=0;
    for(int i=0;i<nums.size();i++){
        curr_count=curr_count+nums[i];
        if(curr_count>mid){
            count++;
            curr_count=nums[i];
        }
    }
    if(count<=k)return true;
    return false;
}