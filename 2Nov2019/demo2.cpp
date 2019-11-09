#include<iostream>
using namespace std;

//DMA(Dynamic Memory Allocation) ->new, delete.

class Student{
    string name;
    public:
        void print(){
            cout<<"Enter the name of the Student"<<endl;
            cin>>this->name;
            cout<<"Name : "<<this->name<<endl;
        }
};
int main(){
    // Student s;
    // s.print();

    // int a =2;
    // int *p = &a;
    // *p =100;
    // cout<<*p<<endl;

    int *ptr = new int(999);
    
    
    
    cout<<ptr<<endl;

    delete ptr;
    cout<<ptr<<endl;
    // if(*ptr == 999)
    //     cout<<"Value : "<<*ptr<<endl;
    // else
    //     cout<<"No Value : "<<endl;       

    return 0;
}