#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <climits>
using namespace std;
int main(){
    string s=  "bbaa"; string t= "aba"; 
    unordered_map<char,int>mp; int size=t.size();
    int curr_size=0; int ans=INT_MAX;

    //Fill in a map
    for(int i=0;i<t.size();i++){
        mp[t[i]]++;
    }

    int t1=0,t2=0;
    while(t2<s.size()){
        if(mp.count(s[t2])){
            if(mp[s[t2]]>0)curr_size++;
            mp[s[t2]]--;
        }

        while(curr_size==size){
            ans=min(ans,(t2-t1)+1);
            if(mp.count(s[t1])){
                mp[s[t1]]++;
                if(mp[s[t1]]>0)curr_size--;
            }
            t1++;
        }
        t2++;
    }
    cout<<ans<<" ";
    return 0;
}