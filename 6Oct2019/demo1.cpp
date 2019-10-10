#include<iostream>
using namespace std;

int main(){
    float p,r,t;
    cout<<"Enter the principal, rate, time "<<endl;
    cin>>p>>r>>t;
    // cin>>r;

    float si = (p*r*t)/100;
    
    cout<<"Simple Interest: "<<si<<endl;

    return 0;
}