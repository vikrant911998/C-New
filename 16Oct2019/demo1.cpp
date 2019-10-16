#include<iostream>
// #include<stdio.h>
using namespace std;

int main(){
    int a = 9;//SMA Static memory allocation
    int *p = &a;
    int b[] = {1,2,3,4,5};
    int *f = b;
    // cout<<"Address : "<<p<<endl;   
    cout<<"Value :"<<*(f+1)<<endl;
    // printf("%d\n",p);

    return 0;
}