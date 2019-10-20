#include<iostream>
using namespace std;

//multiple inheritance
class First{
    public:
        void print1(){
            cout<<"Print of Class First"<<endl;
        }
};

class Second{
    public:
        void print2(){
            cout<<"Print of Class Second"<<endl;
        }
};

class Third:public First,public Second{
    public:
        void print3(){
            cout<<"Print of Class Third"<<endl;
        }
};


int main(){
    Third obj;
    obj.print1();
    obj.print2();
    obj.print3();

    return 0;
}