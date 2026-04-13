#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>nums={5,1,4,2}; int limit=6; 
    int ans=0;
    sort(nums.begin(),nums.end()); int left=0; int right=nums.size()-1;
    while(left<=right){
        if(nums[left]+nums[right]>limit){
            ans++;
            right--;
        }
        else {
            ans++;
            left++;
            right--;
        }
    }

    cout<<ans<<" ";
    return 0;
}