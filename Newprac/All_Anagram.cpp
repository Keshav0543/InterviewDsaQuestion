#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
int main(){
    string str="" , t=""; unordered_map<char,int>mp; int size=t.size(); int track=0;
    for(int i=0;i<t.size();i++)mp[t[i]]++;
    
    int left=0;  vector<int>ans;
    for(int i=0;i<str.size();i++){
        //Check element
        if(mp.find(str[i])!=mp.end()){
            if(mp[str[i]]>0){
                mp[str[i]]--;
                track++;
            }
            //Duplication handling
            else{
                while(left<i){
                    if(str[left]==str[i]){
                        left++;
                        break;
                    }
                    else if(mp.find(str[left])!=mp.end()){
                        mp[str[left]]++;
                        track--;
                    }
                   left++;
                }
            }
        }

        else {
            while(left<=i){
                if(mp.find(str[left])!=mp.end()){
                        mp[str[left]]++;
                        track--;
                }
                left++;
            }
        }

        if(track==size){
            ans.push_back(left);
            mp[str[left]]++;
            track--;
            left++;
        }
    }


    for(int i=0; i<ans.size();i++)cout<<ans[i]<<" ";
    return 0;
}