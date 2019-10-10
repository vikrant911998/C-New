#include<iostream>
using namespace std;

int main(){
    int a = 2345;
    int b=0;

    while(a != 0){
        int temp = a%10;
        b = b*10 + temp;
        a = a/10;
    }

    cout<<"Reverse is "<<b<<endl;
    return 0;
}