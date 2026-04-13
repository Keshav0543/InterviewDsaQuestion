#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<vector<int>>nums={
    {5, 1, 2},
    {3, 4, 1}
}; int k=10;  
int ans=0;

    //First for prefix Find
    for(int i=0;i<nums.size();i++){
        int prev=0;
        for(int j=0;j<nums[i].size();j++){
            nums[i][j]+=prev;
            prev=nums[i][j];
        }
    }

   //Now fnd <k here
    
    for(int i=0;i<nums[0].size();i++){
        int j=0;int prev=0;
        while(j<nums.size()){
            if(nums[j][i]+prev<=k){
                ans++;
                prev+=nums[j][i];
            }
            else break;
            j++;
        }
    }

    cout<<ans<<" ";
    return 0;
}