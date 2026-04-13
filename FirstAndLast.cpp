#include <iostream>
#include <vector>
using namespace std;
int BinarySearchLeft(int left,int right,int target,vector<int>&nums);
int BinarySearchRight(int left,int right,int target,vector<int>&nums);
int main(){
    vector<int>nums={1,2,4,4,4,4,5,6}; int target=4; 
    int First_ind=-1; int Last_ind=-1; 
    First_ind=BinarySearchLeft(0,nums.size()-1,target,nums);
    Last_ind=BinarySearchRight(0,nums.size()-1,target,nums);
    cout<<First_ind<<" "<<Last_ind;
    return 0;
}

int BinarySearchLeft(int left,int right,int target,vector<int>&nums){
    //base cases
    int ans=-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(nums[mid]==target){
            ans=mid;
            left=0;
            right=mid-1;
        }
        else if(nums[mid]>target)right=mid-1;
        else left=mid+1;
    }
    return ans;
}

int BinarySearchRight(int left,int right,int target,vector<int>&nums){
    //base cases
    int ans=-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(nums[mid]==target){
            ans=mid;
            left=mid+1;
            right=nums.size()-1;
        }
        else if(nums[mid]>target)right=mid-1;
        else left=mid+1;
    }
    return ans;
}