#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>>nums={{1,2},{4,5},{3,6}};
    sort(nums.begin(),nums.end());

    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[i].size();j++)cout<<nums[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}