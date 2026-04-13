#include <iostream>
#include <vector>
using namespace std;
int main()
{
 vector<vector<char>> grid1 = {
    {'.','.'},
    {'.','.'}
};
    int ans = 0;
    vector<vector<int>> grid2(grid1.size(), vector<int>(grid1[0].size(), 0));
    // Now lets treat x as 1 and y has -1 and . has 0

    for (int i = 0; i < grid1.size(); i++)
    {
        int prev = 0;
        for (int j = 0; j < grid1[i].size(); j++)
        {
            if (grid1[i][j] == 'X')
            {
                prev += 1;
                grid2[i][j] = prev;
            }
            else if (grid1[i][j] == 'Y')
            {
                prev += -1;
                grid2[i][j] = prev;
            }
            else
            {
                prev += 0;
                grid2[i][j] = prev;
            }
        }
    }

    vector<vector<int>>xcount(grid1.size(), vector<int>(grid1[0].size(), 0));

    //Now lets count the x Frequency 

    for(int i=0;i<grid1.size();i++){
        for(int j=0;j<grid1[i].size();j++){
            xcount[i][j]=(grid1[i][j]=='X' ? 1:0);
            if(j>0)xcount[i][j]+=xcount[i][j-1];
            if(i>0)xcount[i][j]+=xcount[i-1][j];
            if(i>0 && j>0)xcount[i][j]-=xcount[i-1][j-1];
        }
    }

    // Now lets count the frequency...

    for (int i = 0; i < grid2[0].size(); i++)
    {
        int prev = 0;
        int j = 0;
        while (j < grid2.size())
        {
            if (prev + grid2[j][i] == 0 && xcount[j][i]>0)
            {
                ans++;
            }
            prev += grid2[j][i];
            j++;
        }
    }

    cout << ans << " ";
    return 0;
}