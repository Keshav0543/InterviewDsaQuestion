#include <iostream>
#include <string>
using namespace std;
int main(){
    string str=""; 
    char c='p'; 
    int data=0; int flag=0;
    for(int ind=0;ind<str.size();ind++){
        if(str[ind]==' ' && flag==0)continue;
        else if(str[ind]=='-' && flag==0){
            c='-';
            flag=1;
        }
        else if(str[ind]=='+' && flag==0){
            c='+';
            flag=1;
        }
        else if(str[ind]>='0' && str[ind]<='9'){
            flag=1;
            int temp=str[ind]-'0';
            data=(data*10)+temp;
        }
        else break;
    }
    if(c=='p' || c=='+')cout<<data<<" ";
    else cout<<(data*-1);
    return 0;
}