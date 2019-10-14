#include<iostream>
using namespace std;
void interest();

int main(){
    interest();

    return 0;
}

void interest(){
    int p,r,t;
    cout<<"Enter the principal , rate, time"<<endl;
    cin>>p>>r>>t;

    float si = (p*r*t)/100;
    cout<<"SI : "<<si<<endl;
}