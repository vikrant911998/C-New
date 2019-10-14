#include<iostream>
using namespace std;


int main(){
    int a[]={1,0,1,1,0,1,0,1};
    int zero = 0;

    for(int i=0;i<8;i++){
        if(a[i] == 0)
            zero++;    
    }

    cout<<"Count : "<<zero<<endl;

    for(int i=0;i<8;i++){
        if(i<zero)
            a[i] = 0;
        else
            a[i] = 1;
    }

    for(int i=0;i<8;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}