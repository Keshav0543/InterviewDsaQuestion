#include <iostream>
#include <vector>
using namespace std;
int main(){
   vector<int> nums = {10, 20, 30, 40, 50};
vector<vector<int>> queries = {{0, 4, 3, 2}};
   
    for(int j=0;j<queries.size();j++){
        int idx=queries[j][0]; int vi=queries[j][3];
        while(idx<=queries[j][1]){
            nums[idx]=(1LL* nums[idx] * vi) % (109 + 7);
            idx+=queries[j][2];
        }
    }

    int ans=nums[0];
    for(int i=1;i<nums.size();i++){
        ans=ans^nums[i];
    }
    cout<<ans<<" ";
    return 0;
}