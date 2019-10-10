#include<iostream>
using namespace std;

int main(){
    int a;

    cout<<"Enter the number"<<endl;
    cin>>a;
    
    if(a>0){
        cout<<"positive"<<endl;
    }
    else if(a<0){
        cout<<"negative"<<endl;
    }
    else if(a==0){
        cout<<"zero"<<endl;
    }

    return 0;
}