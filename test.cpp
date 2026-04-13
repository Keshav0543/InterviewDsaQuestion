#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    vector<int> nums = {4, -1, 3};
    vector<vector<int>> obs = {{2,4}};
    pair<int,int>p={2,3};
    unordered_map<int,vector<int>>mp;
    for(int i=0;i<obs.size();i++)mp[i].push_back(obs[i][i]);

  
    return 0;
}