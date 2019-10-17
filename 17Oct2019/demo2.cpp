#include<iostream>
using namespace std;

class Student{
    
    int rollno;//instance variable.
    public:
        Student(){
            this->rollno = 234525;
        }
        static int schoolid;//Class Variable.
        //non static
        static void display(){
            cout<<"Non static value is "<<rollno<<endl;
            cout<<"Static Value is : "<<schoolid<<endl;
        }
};

int Student::schoolid = 101;


int main(){
    Student s1;
    // s1.display();
    Student::display();
    
    return 0;
}