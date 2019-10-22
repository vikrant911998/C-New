#include<iostream>
using namespace std;


class Student{
    string name;
    int age;
    string address;

    public:
        Student(){
            this->name = "Unknown";
            this->age = 0;
            this->address = "not available";
        }

        void setInfo(string name, int age){
            this->name = name;
            this->age = age;
        }
        
        void setInfo(string name, int age,string address){
            this->name = name;
            this->age = age;
            this->address = address;
        }   
        void display(){
            cout<<"Name : "<<this->name<<endl;
            cout<<"Age : "<<this->age<<endl;
            cout<<"Address : "<<this->address<<endl;
        }
};

int main(){
    Student s1,s2;
    s1.setInfo("vikrant",23);
    s2.setInfo("rahul",27,"rohini");
    s1.display();
    s2.display();
    return 0;
}