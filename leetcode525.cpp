#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    vector<int>nums={0,1,0}; 
    int goal=0; unordered_map<int,int>mp;
    int prev=0; mp[prev]=-1; int ans=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0)nums[i]=-1;
        prev+=nums[i];
        if(mp.count(prev-goal)){
            int temp=(i-mp[prev-goal]);
            ans=max(ans,temp);
        }
        else mp[prev]=i;
    }
    cout<<ans<<" ";
    return 0;
}