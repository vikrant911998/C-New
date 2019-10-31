#include<iostream>
using namespace std;

//abstract class
class Bank{
    int age;
    string name;
    public:
        void input(){
            cout<<"Enter the name"<<endl;
            cin>>name;
            cout<<"Enter the age"<<endl;
            cin>>age;
        }
        void display(){
            cout<<"Name :"<<this->name<<endl;
            cout<<"Age : "<<this->age<<endl;
        }
        //Pure Virtual Function
        virtual void roi()=0;
};

class SBI:public Bank{
    public:
        void roi(){
            cout<<"SBI rate of interest"<<endl;
        }
};


int main(){
    // Bank obj;
    SBI obj;
    obj.input();
    obj.display();
    obj.roi();

    return 0;
}