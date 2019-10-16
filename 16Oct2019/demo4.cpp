#include<iostream>
using namespace std;

class Student{
    private:
        //member variables or instance variables
        int rollno;
        string name;
        string address;
    
    public:
        //constructors
        //Default constructor
        Student(){
            cout<<"Default constructor called"<<endl;
        }

        //parameterized Constructors
        Student(int a, int b){
            
            cout<<"A and B are "<<a<<" "<<b<<endl;
        }

        Student(int a, string name){
            cout<<"Another parameter constructor"<<endl;
            cout<<"Name is "<<name<<endl;
        }
        
        
};


int main(){
    Student s1(2,3),s2,s3(4,"vikrant");

    return 0;
}