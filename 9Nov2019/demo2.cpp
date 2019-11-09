#include<iostream>
using namespace std;

class Parent{
    int i;
    public:
        
        Parent(){

        }
        Parent(int i){
            this->i = i;
        }
        void print(){
            cout<<"i = "<<this->i<<endl;
        }
};

class Child:public Parent{
    int j;
    public:
        Child(int j,int i):Parent(i){
            this->j = j;
            // this->i = i;
        }
        void display(){
            this->print();
            cout<<"j = "<<this->j<<endl;
        }
};

int main(){
    Child c1(3,4);
    c1.display();
    return 0;
}