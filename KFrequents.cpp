#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    vector<int>nums={1,2,1,2,1,2,3,1,3,2};  int k=2;
     vector<int>ans; vector<vector<int>> bucket(nums.size() + 1);
    unordered_map<int,int>mp; int longest=0; 
    for(int i=0;i<nums.size();i++)mp[nums[i]]++;

    for(auto it=mp.begin();it!=mp.end();it++){
        bucket[it->second].push_back(it->first);
        longest=max(longest,it->second);
    }

    for(int i=longest;i>=0;i--){
    for(int j=0;j<bucket[i].size();j++){
        if(ans.size()==k) break;
        ans.push_back(bucket[i][j]);
    }
}

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
   
    return 0;
}