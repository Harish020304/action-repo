#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int a=0;
    int * ptr=&a;
    cout<<sizeof(ptr);
    return 0;
}