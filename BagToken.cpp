#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>tokens={200,100}; int power=150;
    sort(tokens.begin(),tokens.end()); int score=0;  int ans=0;
    int left=0; int right=tokens.size()-1;

    while(left<=right){
        if(power>=tokens[left]){
            score++;
           power= power-tokens[left];
           ans=max(score,ans);
           left++;
        }
        else if(score>0){
            score--;
            power+= tokens[right];
            right--;
        }
        else left++;
    }

    cout<<ans<<" ";
    return 0;
}