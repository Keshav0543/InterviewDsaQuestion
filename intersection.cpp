#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main(){
    vector<int>nums1={4,9,5};  vector<int>nums2={9,4,9,8,4}; vector<int>ans;
    unordered_map<int,int>mp; sort(nums2.begin(),nums2.end());
    for(int i=0;i<nums1.size();i++)mp[nums1[i]];

    // Finding Intersection Point
    for(int i=0;i<nums2.size();i++){
        if(i<nums2.size()-1 && nums2[i]==nums2[i+1])continue;

        else if(mp.find(nums2[i])!=mp.end()){
            ans.push_back(nums2[i]);
        }
    }

    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    return 0;
}