#include<iostream>
using namespace std;

int main(){
    int i=1;
    int sum = 0;
    while(i<=10){
        sum = sum+i;
        i = i+1;
    }
    cout<<"Sum is "<<sum<<endl;

    return 0;
}