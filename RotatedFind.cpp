#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>nums={6,7,0,1,2,4,5}; int target=4;
    int left=0; int right=nums.size()-1; int ans=-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(nums[mid]==target){
            ans=mid;
            break;
        }
        else if(nums[left]<=nums[mid]){
            if(nums[left]<=target && nums[mid]>=target){
                if(nums[mid]>target)right=mid-1;
                else left=mid+1;
            }
            else left=mid+1;
        }
        else {
            if(nums[mid]<=target && nums[right]>=target){
                 if(nums[mid]>target)right=mid-1;
                 else left=mid+1;
            }
            else right=mid-1;
        }
    }

    cout<<ans<<" ";
    return 0;
}