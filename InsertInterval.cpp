#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<vector<int>>Interval={{1,10}}; vector<vector<int>>NewInterval={{3,5}}; 
    vector<vector<int>>ans;

    for(int i=0;i<Interval.size();i++){
        if(!(Interval[i][1]<NewInterval[0][0] || Interval[i][0]>NewInterval[0][1])){
            int mini=min(Interval[i][0],NewInterval[0][0]);
            int maxi=max(Interval[i][1],NewInterval[0][1]);
            NewInterval[0][0]=mini;
            NewInterval[0][1]=maxi;
        }
        else ans.push_back({Interval[i][0],Interval[i][1]});
    }

    ans.push_back({NewInterval[0][0],NewInterval[0][1]});
    sort(ans.begin(),ans.end());

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}