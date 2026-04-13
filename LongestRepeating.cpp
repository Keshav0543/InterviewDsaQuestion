#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main(){
    string s="BAAA"; 
    int max_freq=0; unordered_map<char,int>mp; int t1=0; int t2=0; int ans=0; int k=0;

    while(t2<s.size()){
        mp[s[t2]]++;
        max_freq=max(max_freq,mp[s[t2]]);
        int size=(t2-t1)+1;
        while(size-max_freq>k){
            mp[s[t1]]--;
            t1++;
            size=(t2-t1)+1;
        }
        if(size-max_freq<=k)ans=max(ans,size);
        t2++;
    }
    cout<<ans<<" ";
    return 0;
}