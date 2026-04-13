#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main(){
    vector<int>nums={3,2,4}; int target=6;
    unordered_map<int,int>mp; mp[nums[0]]=0; int firstNum=-1; int secondNum=-1;
    for(int i=1;i<nums.size();i++){
        int need=target-nums[i];
        if(mp.find(need)!=mp.end()){
            secondNum=i;
            firstNum=mp[need];
            break;
        }
        else mp[nums[i]]=i;
    }

    cout<<firstNum<<" "<<secondNum;
    return 0;
}