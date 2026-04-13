#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
int main(){
    string s="aAAbbbbccdde"; 
    unordered_map<char,int>mp; int ans=0;
    //Filling in a map
    for(int i=0;i<s.size();i++)mp[s[i]]++;

    //Now check the longest string 
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second!=1){
            int temp=it->second/2;
            ans+=temp*2;
            it->second=it->second%2;
        }
    }

    //for last input
    for(auto it=mp.begin();it!=mp.end();it++)if(it->second==1){
        ans++;
        break;
    }
    cout<<ans<<" ";
    return 0;
}