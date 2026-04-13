#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int DistanceFind(vector<int>&nums,int cow,int left,int right);
bool Isvalid(vector<int>&nums,int cow,int mid);
int main(){
    vector<int>nums={1, 2, 4, 8, 9}; int cow=3;
    sort(nums.begin(),nums.end()); int left=1; int right=nums[nums.size()-1];
    int result=DistanceFind(nums,cow,left,right);
    cout<<result<<" ";
    return 0;
}

int DistanceFind(vector<int>&nums,int cow,int left,int right){
    int ans=0;
    while(left<=right){
        int mid=(left+right)/2;
        bool result=Isvalid(nums,cow,mid);
        if(result){
            ans=max(ans,mid);
            left=mid+1;
        }
        else right=mid-1;
    }
    return ans;
}

bool Isvalid(vector<int>&nums,int cow,int mid){
    int count=1; int prev=nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i]-prev>=mid){
            count++;
            prev=nums[i];
        }
    }

    if(count>=cow)return true;
    return false;
}