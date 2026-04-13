#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){
    vector<int>nums={2,4,6}; int k=1; 
    unordered_map<int,int>mp;
    int oddN=0; mp[oddN]++; int ans=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2!=0){
            oddN++;
        }
       if(oddN>=k){
        if(mp.count(abs(oddN-k)))ans+=mp[abs(oddN-k)];
       }
       mp[oddN]++;
    }
    cout<<ans<<" ";
    return 0;
}