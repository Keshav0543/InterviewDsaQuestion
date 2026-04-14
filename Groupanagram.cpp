#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main()
{
    vector<string> str = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<string> temp = str;
    unordered_map<string, vector<int>> mp;
    vector<vector<string>> ans;

    // Sorting Anagram
    for (int i = 0; i < str.size(); i++)
    {
        sort(temp[i].begin(), temp[i].end());
        mp[temp[i]].push_back(i);
    }

    int ind = 0;
    for (auto &it : mp)
    {
        ans.push_back({});
        for (int val : it.second)
        {
            ans[ind].push_back(str[val]);
        }
        ind++;
    }

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}