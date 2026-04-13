#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>nums={0};  
    unordered_set<int>mp; int longest=0; vector<int>store;
    for(int i=0;i<nums.size();i++){
        mp.insert(nums[i]);
    }

    for(auto it : mp){
        if(mp.find(it-1)==mp.end())store.push_back(it);
    }

    for(int i=0;i<store.size();i++){
        int value=store[i]; int count=1;
        while(mp.find(value+1)!=mp.end()){
            value++;
            count++;
        }
        longest=max(longest,count);
    }
    cout<<longest<<" ";
    return 0;
}