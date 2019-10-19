#include<iostream>
using namespace std;

class First{
    public:
        //Parent class default constructor
        First(){
            cout<<"Default Constructor"<<endl;
        }
        First(int a){
            cout<<"Parameter Constructor of Parent Class"<<endl;
        }
};

class Second:public First{
    public:
        //child class default constructor
        Second():First(34){//constructor chaining
            cout<<"Default Constructor of Child Class"<<endl;
        }
        Second(int a):First(34){
            cout<<"Parameter Constructor of Child Class"<<endl;
        }
};


int main(){
    Second obj(65);


    return 0;
}