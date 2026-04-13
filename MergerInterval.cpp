#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int main(){
   vector<vector<int>>nums={{4,7},{1,4}};  
   vector<vector<int>>ans;
   sort(nums.begin(),nums.end()); stack<int>st; st.push(0);

   for(int i=1;i<nums.size();i++){
        if(nums[st.top()][1]>=nums[i][0]){
            int mini=min(nums[st.top()][0],nums[i][0]);
            int maxi=max(nums[st.top()][1],nums[i][1]);
            nums[st.top()][0]=mini;
            nums[st.top()][1]=maxi;
        }
        else {
            ans.push_back({nums[st.top()][0],nums[st.top()][1]});
            st.pop();
            st.push(i);
        }
   }


   while(!st.empty()){
    ans.push_back({nums[st.top()][0],nums[st.top()][1]});
    st.pop();
   }

   for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++)cout<<ans[i][j]<<" ";
    cout<<endl;
   }
    return 0;
}