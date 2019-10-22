#include<iostream>
using namespace std;

class A{
    public:
        void play1(){
            cout<<"Play one of Class A"<<endl;
        }

        void play2(){
            cout<<"Play Two of Class A"<<endl;
        }
};

class B:public A{
    public:
        //Function Overriding
        void play2(){
            cout<<"Play Two of Class B"<<endl;
        }
};


int main(){
    B obj;
    obj.play1();
    obj.play2();

    return 0;
}