#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    vector<int>nums={1, 0, 1, 1, 1, 0, 0}; unordered_map<int,int>mp;
    int ans=0; mp[0]=-1; int count=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0)count+=-1;
        else count+=nums[i];
        if(mp.find(count)!=mp.end()){
            int left=mp[count];
            ans=max(ans,(i-left));
        }
        else mp[count]=i;
    }
    cout<<ans<<" ";
    return 0;
}