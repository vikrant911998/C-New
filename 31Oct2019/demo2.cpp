#include<iostream>
using namespace std;

//Interface
class Bank{
    public:
        virtual void input() = 0;
        virtual void display() = 0;
};

class SBI:public Bank{
    public:
        void input(){
            cout<<"Input of Class SBI"<<endl;
        }
        void display(){
            cout<<"Display of Class SBI"<<endl;
        }
};

int main(){
    SBI obj;
    obj.input();
    obj.display();
    
    return 0;
}