#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int main(){
    vector<int>nums={-3,-2,-3}; 
    int ans=INT_MIN; int curr_sum=0; int curr_minSum=0; int MIN_SUM=INT_MAX; int totalSum=0;
    for(int i=0;i<nums.size();i++){
        //KAndane algo ya toh continue ya toh reset.....
        totalSum+=nums[i];
        curr_sum=max(nums[i],curr_sum+nums[i]);
        curr_minSum=min(nums[i],nums[i]+curr_minSum);
        ans=max(ans,curr_sum);
        MIN_SUM=min(curr_minSum,MIN_SUM);
    }
    if(ans<0)ans=ans+0;
    else ans=max(ans,totalSum-MIN_SUM);
    cout<<ans<<" ";
    return 0;
}