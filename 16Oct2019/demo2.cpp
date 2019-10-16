#include<iostream>
using namespace std;

//class(keyword)  class_name{};
class Student{
    private:
        //member variables or instance variables
        int rollno;
        string name;
        string address;


    public:

        
        //member functions or methods
        void input(){
            cout<<"Enter the rollno"<<endl;
            cin>>rollno;
            cout<<"Enter the name"<<endl;
            cin>>name;
            cout<<"Enter the address"<<endl;
            cin>>address;
        }
        void display(){
            cout<<"Rollno : "<<rollno<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Address : "<<address<<endl;
        }
};


int main(){

    // Class_Name object_Name;
    Student s1;
    // s1.rollno = 101;
    // s1.name = "vikrant";
    // s1.address = "rohini";
    s1.input();
    s1.display();

    return 0;
}