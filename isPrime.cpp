#include<iostream>
using namespace std;

int main(){
    int a,r=0,d;
    cout<<"enter the number"<<endl;
    cin>>a;
    bool prime=true;
    if(a==0 || a==1){
        prime=false;
    }
    for(int i=2;i <= a/2;i++){
        if(a%i==0){
            prime=false;
            break;
        }
    }
    cout<<prime<<endl;
}