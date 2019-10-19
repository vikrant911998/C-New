#include<iostream>
using namespace std;

//Parent Class or Super Class
class Parent{
    //Access Specifiers
    public:
        void display(){
            cout<<"This is parent class"<<endl;
        }
};

//Child Class or Sub Class
class Child:public Parent{
    public:
        void display1(){
            cout<<"This is child class"<<endl;
        }
};


int main(){
    Parent p;
    p.display();
    Child c;
    c.display1();
    c.display();


    return 0;
}