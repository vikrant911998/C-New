#include<iostream>
using namespace std;

class Student{
    string name;
    int roll_no;
    string address;

    public:
        void input(){
            cout<<"Enter the name"<<endl;
            cin>>name;
            cout<<"Enter the rollno"<<endl;
            cin>>roll_no;
            cout<<"Enter the address"<<endl;
            cin>>address;
        }

        void display(){
            cout<<"Name : "<<this->name<<endl;
            cout<<"Roll No : "<<this->roll_no<<endl;
            cout<<"Address : "<<this->address<<endl;
        }

};


int main(){
    
    Student list[3];
    Student s1;

    for(int i=0;i<3;i++){
        s1.input();
        list[i] = s1;
    }

    cout<<"The List is "<<endl;
    for(int i=0;i<3;i++){
        list[i].display();
    }

    return 0;
}