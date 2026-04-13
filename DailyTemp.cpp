#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main(){
    vector<int>nums={30,60,90}; 
    stack<int>st; vector<int>ans(nums.size(),0);
    st.push(0); 
    for(int i=1;i<nums.size();i++){
        while(!st.empty() && nums[i]>nums[st.top()]){
            ans[st.top()]=i-st.top();
            st.pop();
        }
        st.push(i);
    }

    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    return 0;
}