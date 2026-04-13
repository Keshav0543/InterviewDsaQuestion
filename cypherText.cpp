#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string str="ch   ie   pr"; int row=3; 
    int col=(str.size()/row);
    vector<vector<char>> matrix(row, vector<char>(col, ' ')); int index=0; string ans="";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           matrix[i][j]=str[index];
           index++;
        }
    }

    for(int i=0;i<col;i++){
    for(int j=0;j<row && j+i<col;j++){
        ans.push_back(matrix[j][j+i]);
    }
    }   

    while(!ans.empty() && ans.back()==' ')ans.pop_back();

    cout<<ans<<" ";
    return 0;
}