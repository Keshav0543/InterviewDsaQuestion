#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<vector<int>>nums={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>>ans(nums[0].size());
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[0].size();j++){
            ans[j].push_back(nums[i][j]);
        }
    }

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++)cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}