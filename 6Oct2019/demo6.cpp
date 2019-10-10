#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the three sides of the triangle"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;

    if(a == b && b == c){
        cout<<"Equilateral"<<endl;
    }
    else if (a == b || b == c || a==c){
        cout<<"Isoceles "<<endl;
    } 
    else{
        cout<<"Scalene"<<endl;
    }


    return 0;
}