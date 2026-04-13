#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;
pair<int, int> Calc(int size,  int x, int y, int d , unordered_set<string>&st);

int main()
{
    vector<int> nums = {6,-1,-1,6};
    vector<vector<int>> obs = {{0,0}};
    int x = 0;
    int y = 0;
    int ans = 0;
    int d = 0; // 0 for north //1 for east //2 for south //3 for west
    pair<int, int> next;
    // Store obs in a set
    unordered_set<string> set1;
    for (int i = 0; i < obs.size(); i++)
    {
        int a;
        int b;
        a = obs[i][0];
        b = obs[i][1];
        string s = to_string(a) + "," + to_string(b);
        set1.insert(s);
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == -1)
            d = (d + 1) % 4;

        else if (nums[i] == -2)
            d = ((d - 1) + 4) % 4;

        else
        {
            next = Calc(nums[i], x, y, d, set1);
            x = next.first;
            y = next.second;
            ans = max(ans, (x * x) + (y * y));
        }
    }
    cout << ans << " ";
    return 0;
}

pair<int, int> Calc(int size, int x, int y, int d , unordered_set<string>& st)
{
    int temp = 0;

    while (temp < size)
    {
        if (d == 0) { // North
            string s = to_string(x) + "," + to_string(y+1);
            if (st.find(s) != st.end()) break;
            y++;
        }

        else if (d == 1) { // East
            string s = to_string(x+1) + "," + to_string(y);
            if (st.find(s) != st.end()) break;
            x++;
        }

        else if (d == 2) { // South
            string s = to_string(x) + "," + to_string(y-1);
            if (st.find(s) != st.end()) break;
            y--;
        }

        else { // West
            string s = to_string(x-1) + "," + to_string(y);
            if (st.find(s) != st.end()) break;
            x--;
        }

        temp++;
    }

    return {x, y};
}
