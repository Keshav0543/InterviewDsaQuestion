#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){
    vector<int>nums={1,2,3}; int k=3;
    unordered_map<int,int>mp;  int ans=0;
    int prefixSum=0;
    for(int i=0;i<nums.size();i++){
        prefixSum+=nums[i];
        if(prefixSum-k==0)ans++;
        if(mp.size()>0  && mp.count(prefixSum-k))ans+=mp[prefixSum-k];
        mp[prefixSum]++;
    }
    cout <<ans<<" ";
    return 0;
}