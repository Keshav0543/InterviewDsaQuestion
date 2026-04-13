#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int Solve(vector<int>&num1, vector<int>&num2, int current, int prev);
int main(){
    vector<int>num1={1,5,3,6,7}; vector<int>num2={4,3,1};
    sort(num2.begin(),num2.end());
    int ans=Solve(num1,num2,0,-1);
    if(ans==INT_MAX)cout<<-1<<" ";
    else cout<<ans<<" ";
    return 0;
}

int Solve(vector<int>&num1, vector<int>&num2, int current, int prev){
    //Base cases
    if(current>=num1.size()) return 0;
    //Hypothesis
    int result1=1e9+1;
    if(num1[current]>prev){
        result1=Solve(num1,num2,current+1,num1[current]);
    }

    int result2=1e9+1;
    auto it=upper_bound(num2.begin(),num2.end(),prev);
    if(it!=num2.end()){
        int j=it-num2.begin();
        result2=1+Solve(num1,num2,current+1,num2[j]);
    }

    return min(result1,result2);
}


