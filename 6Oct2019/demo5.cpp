#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;

    if(number%2 == 0){
        cout<<"even number"<<endl;
    }
    else{
        cout<<"odd number"<<endl;
    }

    // cout<<"modulus : "<<number%2<<endl;

    return 0;
}