#include<iostream>
using namespace std;
int main(){
    int row,i,j, col;
    row=4;
    col=4;
    for(i=0;i<row;i++){
        for ( j = 0; j < col; j++)
        {
            if(i==0 || i==row-1 || j==0|| j==row-1){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl; 
    }
//inverted pyramid 
        for(i=0;i<row;i++){
        for ( j = 0; j < col; j++)
        {
            if(i==0 || j==0|| j==row-i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl; 
    }
    return 0;
}
