#include<iostream>
using namespace std;

int main(){
    //declaration syntax
    int a[5]={21,31,14,15,20};
    int ecount=0;

    for(int i=0;i<5;i++){
        // cout<<a[i]<<endl;
        if(a[i] %2 ==0){
            ecount++;
        }
    }

    cout<<ecount<<endl;


    return 0;
}