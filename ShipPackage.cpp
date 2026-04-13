#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int Capacity(vector<int>&nums,int d, int left,int right);
bool Isvalid(vector<int>&nums,int d,int mid);
int main(){
    vector<int>nums={3,2,2,4,1,4}; int d=3; 
    int left=0; int right=0;
    for(int i=0;i<nums.size();i++){
        left=max(left,nums[i]);
        right+=nums[i];
    }

    int result=Capacity(nums,d,left,right);
    cout<<result<<" ";
    return 0;
}

int Capacity(vector<int>&nums,int d, int left,int right){
    int ans=INT_MAX;
    while(left<=right){
        int mid=(left+right)/2;
        bool result=Isvalid(nums,d,mid);
        if(result){
            ans=min(ans,mid);
            right=mid-1;
        }
        else left=mid+1;
    }
    return ans;
}

bool Isvalid(vector<int>&nums,int d,int mid){
    int curr_count=0; int count=1;
    for(int i=0;i<nums.size();i++){
        curr_count+=nums[i];
        if(curr_count>mid){
            count++;
            curr_count=nums[i];
        }
    }
    if(count<=d)return true;
    return false;
}