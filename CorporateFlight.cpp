#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<vector<int>>n={{1,2,10},{2,2,15}};
    int num=2; vector<int>ans(num,0);
    for(int i=0;i<n.size();i++){
       int firstInd=n[i][0];
       int SecondInd=n[i][1];
       while(firstInd<=SecondInd){
        ans[firstInd-1]+=n[i][2];
        firstInd++;
       }
    }

    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    return 0;
}