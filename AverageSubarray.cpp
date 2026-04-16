#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int main(){
   vector<int> nums = {0,1,1,3,3};
    int left=0;  double sum=0; int k=4; int track=0;
    double ans=INT_MIN;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        track++;
        if(track==k){
            double temp=sum/k;
            ans=max(ans,temp);
            sum-=nums[left];
            left++;
            track--;
        }
    }

    if(nums.size()==1)cout<<nums[0]<<" ";
    else cout<<ans<<" ";
    return 0;
}