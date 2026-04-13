#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
 vector<vector<int>> nums = {{0,0,0,5},{4,3,1,4},{0,1,1,4},{1,2,1,3},{0,0,1,1}};   
 unordered_map<int,int>row; unordered_map<int,int>col;

    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[i].size();j++)if(nums[i][j]==0){
            row[i]++;
            col[j]++;
        }
    }

    //Now lets make 0 to row and column

    for(auto it=row.begin();it!=row.end();it++){
        for(int j=0;j<nums[0].size();j++)nums[it->first][j]=0;
    }

    
    for(auto it=col.begin();it!=col.end();it++){
        for(int i=0;i<nums.size();i++){
            nums[i][it->first]=0;
        }
    }


    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[0].size();j++)cout<<nums[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}