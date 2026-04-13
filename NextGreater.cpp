// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <stack>
// using namespace std;
// int main(){
//     vector<int>nums1={6,2}; vector<int>nums2={2,4,6,8,10}; 
//     unordered_map<int,int>mp;
//     vector<int>ans(nums1.size(),-1); stack<int>st;
//     //Fill the map....
//     for(int i=0;i<nums1.size();i++)mp[nums1[i]]=i;

//     for(int i=0;i<nums2.size();i++){
//         while(!st.empty() && nums2[i]>nums2[st.top()]){
//             if(mp.count(nums2[st.top()])){
//                 ans[mp[nums2[st.top()]]]=nums2[i];
//             }
//             st.pop();
//         }
//         st.push(i);
//     }

//     for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
// }



