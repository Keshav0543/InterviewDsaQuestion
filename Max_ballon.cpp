#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    string s="lloo"; 
    unordered_map<char,int>mp;
     int minLO=1000;  int flag=0; int minAll=1000; string temp="balloon";

    for(int i=0;i<temp.size();i++)mp[temp[i]]=0;
    //Count the occurenece here
    for(int i=0;i<s.size();i++){
        if(s[i]=='b'|| s[i]=='a'|| s[i]=='l'|| s[i]=='o' || s[i]=='n')mp[s[i]]++;
    }

    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second<1){
            flag=1;
            break;
        }
        else if(it->first!='l' && it->first!='o')minAll=min(minAll,it->second);
        else if(it->first=='l' || it->first=='o'){
           minLO=min(minLO,it->second);
        }
    }
    int ans=min(minAll,(minLO/2));
    if(flag==1)cout<<0<<" ";
    else cout<<ans<<" ";
    
    return 0;
}