#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main(){
    vector<int>nums={1,2,3,4}; int k=3; 
   int t1=0,t2=0; int ans=0;unordered_map<int,int>mp; int sum=0;
   while(t2 < nums.size()){

    sum += nums[t2];
    mp[nums[t2]]++;   // always insert first

    // remove duplicates
    while(mp[nums[t2]] > 1){
        sum -= nums[t1];
        mp[nums[t1]]--;
        if(mp[nums[t1]] == 0)
            mp.erase(nums[t1]);
        t1++;
    }

    // maintain window size exactly k
    if(t2 - t1 + 1 > k){
        sum -= nums[t1];
        mp[nums[t1]]--;
        if(mp[nums[t1]] == 0)
            mp.erase(nums[t1]);
        t1++;
    }

    if(t2 - t1 + 1 == k && mp.size() == k){
        ans = max(ans, sum);
    }

    t2++;
}

    cout <<ans<<' ';
    return 0;
}