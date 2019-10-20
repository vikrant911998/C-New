#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter the name"<<endl;
    // cin>>str;
    getline(cin,str);
    cout<<"Name is : "<<str<<endl;

    // cout<<str[5]<<endl;
    // cout<<str.find('d')<<endl;
    // cout<<str.compare("Hello World")<<endl;
    // cout<<str.substr(3,4)<<endl;
    // cout<<str.empty()<<endl;
    // cout<<str.length()<<endl;
    // cout<<str.at(6)<<endl;
    // cout<<str.size()<<endl;
    // str.clear();
    // cout<<str<<endl;

    return 0;
}