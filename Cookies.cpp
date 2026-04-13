#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    vector<int>nums1={7,5,6}; 
    vector<int>s={5,6,4}; 
    int ans=0;
    sort(nums1.begin(),nums1.end()); sort(s.begin(),s.end());

    int left=0; 
    for(int i=0;i<nums1.size();i++){
        while(left<s.size()){
            if(s[left]>=nums1[i]){
                ans++;
                left++;
                break;
            }
            left++;
        }
    }

    cout<<ans<<" ";
    return 0;
}