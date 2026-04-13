#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;
int longestSubs(string s,int k);
int main(){
    string s="ababbc"; int k=2; int ans=0;
    ans=max(ans,longestSubs(s,k));
    cout<<ans<<" ";
    return 0;
}

int longestSubs(string s,int k){
    //base cases
    if(s.size()<k)return 0;
    //hypotheis
    unordered_map<char,int>mp;    
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }

    //Scanning here via loop
    for(int i=0;i<s.size();i++){
        if(mp[s[i]]<k){
            int left=longestSubs(s.substr(0,i),k);
            int right=longestSubs(s.substr(i+1),k);
            return max(left,right);
        }
    }
    //induction
    return s.size();
}