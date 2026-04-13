#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<vector<int>>nums={{1,2,3,4}}; int r=2;int c=4; 
    int count=0; vector<vector<int>> ans(r, vector<int>(c,0));
    vector<int>temp;
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[0].size();j++){
            count++;
            temp.push_back(nums[i][j]);
        }
    }

   if(r*c==count){
    int ind=0;int rtemp=0;
        while(rtemp<r){
            int ctemp=0;
            while(ctemp<c){
                ans[rtemp][ctemp]=temp[ind];
                ind++;
                ctemp++;
            }
            rtemp++;
        }
    }

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++)cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}