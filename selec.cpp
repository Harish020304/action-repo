#include<iostream>
using namespace std;

int main(){
    int a[5]={25,10,40,55,30};
    int n=5;
    int min;
    for (int i=0;i<n-1;i++){
        min =i;
        
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
            
        }
        swap(a[min],a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<a[i]<<" ";
    }
    return 0;
}