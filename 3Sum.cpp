#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>nums={-4, -2, -2, -2, 0, 1, 2, 2, 2, 3}; 
    int t1=-1, t2=-1; vector<vector<int>>ans; 

    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if(i>=0 && nums[i]==nums[i-1])continue;
        t1=i+1; t2=nums.size()-1;
        while(t1<t2){
            if(nums[i]+nums[t1]+nums[t2]==0){
                ans.push_back({nums[i],nums[t1],nums[t2]});
                t1++;
                while(t1<t2 && nums[t1]==nums[t1-1])t1++; 
            }
            else if(nums[i]+nums[t1]+nums[t2]<0)t1++;
            else if(nums[i]+nums[t1]+nums[t2]>0)t2--;
        }
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++)cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}