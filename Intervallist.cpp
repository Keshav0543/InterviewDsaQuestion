#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<vector<int>> interval1 = {{1,5},{10,15}};
    vector<vector<int>> interval2 = {{1,5},{10,15}};
    vector<vector<int>>ans;
    int point1=0; int point2=0;
    while(point1<interval1.size() && point2<interval2.size()){
        int max_num=max(interval1[point1][0],interval2[point2][0]);
        int min_num=min(interval1[point1][1],interval2[point2][1]);
        if(min_num>=max_num){
            ans.push_back({max_num,min_num});
        }
           if(interval1[point1][1]>interval2[point2][1])point2++;
           else point1++;
    }

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}