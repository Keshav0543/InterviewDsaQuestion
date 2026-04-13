#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<vector<int>>nums={{9,1,8,9,2,9,1,8,9,2},{10,2,7,8,9,10,2,7,8,9}}; int k=5;
    vector<vector<int>>ans=nums;
    k=k%nums[0].size();
     for(int i=0;i<nums.size();i++){
            if(i%2==0){
                //Step1
                reverse(nums[i].begin()+0,nums[i].begin()+k);
                //step2
                reverse(nums[i].begin()+k,nums[i].begin()+nums[i].size());
                //step3
                reverse(nums[i].begin(),nums[i].end());
            }
            else {
                //Step1
                reverse(nums[i].begin(),nums[i].end());
                // //step2
                reverse(nums[i].begin(),nums[i].begin()+k);
                // //step3
                reverse(nums[i].begin()+k,nums[i].end());
            }
        }
       


    if(ans==nums)cout<<1<<" ";
    else cout<<0<<" ";
    return 0;
}

