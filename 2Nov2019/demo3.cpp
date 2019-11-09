#include<iostream>
using namespace std;

int main(){
    int *ptr = new int[4];
    // cout<<ptr<<endl;
    for(int i=0;i<4;i++){
        *(ptr+i) = 5*i;
    }

    for(int i=0;i<4;i++){
        cout<<*(ptr+i)<<endl;
    }


    return 0;
}