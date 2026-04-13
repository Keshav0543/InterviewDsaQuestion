#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
int main(){
    string s= "tmmzuxt"; 
    int ans=0; int t1=0,t2=0; unordered_map<char,int>mp;
    while(t2<s.size()){
        if(!mp.count(s[t2])){
            ans=max(ans,(t2-t1)+1);
            mp[s[t2]]++;
            t2++;
        }
        else{
            while(mp.count(s[t2])){
                mp[s[t1]]--;
                if(mp[s[t1]] <=0) mp.erase(s[t1]);
                t1++;
            }
        }
    }
    cout<<ans<<" ";
    return 0;
}