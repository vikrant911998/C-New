#include<iostream>
using namespace std;

class First{
    public:
        void print1(){
            cout<<"Print one of class First"<<endl;
        }
};

class Second:public First{
    public:
        void print2(){
            cout<<"Print two of class Second"<<endl;
        }
};

class Third:public Second{
    public:
        void print3(){
            cout<<"Print three of class Third"<<endl;
        }
};



int main(){
    Third obj;
    obj.print1();
    obj.print2();
    obj.print3();
    return 0;
}