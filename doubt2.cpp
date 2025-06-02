#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    // int num[3]={1,2,3};
    // int i=1;
    // num[++i]=num[0];
    // cout<<i<<endl;
    // cout<<num[1]<<endl;
    // cout<<num[i]<<endl;
    int count=56;
    for (const char c : to_string(count))
          cout<<c<<endl;
}