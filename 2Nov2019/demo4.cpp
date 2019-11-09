#include<iostream>
using namespace std;
class A{
    public:
        int a;
        A(){
            cout<<"Default constructor"<<endl;
            this->a = 100;
        }

};

int main(){
    // A obj;
    // cout<<obj.a<<endl;
    A *ptr = new A();
    cout<<ptr->a<<endl;
    
    delete ptr; 
    cout<<"After "<<ptr->a<<endl;

    return 0;
}