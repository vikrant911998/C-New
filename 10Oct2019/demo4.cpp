#include<iostream>
using namespace std;

int main(){
    int a = 3,b=2;
    int result = 1;

    for(int i = 1;i<=b;i++){//2
        result = result*a;//3*3 = 9
    }

    cout<<"Result : "<<result<<endl;

    return 0;
}