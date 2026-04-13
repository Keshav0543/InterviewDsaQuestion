#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    vector<int>nums={-1,-2,-9,-6}; 
    int ans=INT_MIN; int prefix=1; int suffix=1; int n=nums.size()-1;
    for(int i=0;i<nums.size();i++){
        prefix*=nums[i];
        suffix*=nums[n-i];
        ans=max(ans,prefix);
        ans=max(ans,suffix);
        if(prefix==0)prefix=1;
        if(suffix==0)suffix=1;
    }

    cout<<ans<<" ";
   
    return 0;
}