#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<vector<char>> nums = {{'.','.','x'},{'x','.','x'},{'x','.','x'},{'y','.','x'}};
    vector<vector<int>> nums1(nums.size(), vector<int>(nums[0].size(), 0));
    //Now fill in nums1   
    int ans=0;

    for(int i=0;i<nums.size();i++){
        int prev=0;
        for(int j=0;j<nums[i].size();j++){
            if(nums[i][j]=='x'){
                nums1[i][j]=2;
                nums1[i][j]+=prev;
                prev=nums1[i][j];
            }
            else if(nums[i][j]=='y'){
                nums1[i][j]=3;
                nums1[i][j]+=prev;
                prev=nums1[i][j];
            }
            else nums1[i][j]+=prev;
        }
    }

    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[i].size();j++)cout<<nums1[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}