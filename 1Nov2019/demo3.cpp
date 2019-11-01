#include<iostream>
using namespace std;

template <class T1,class T2>
class  Student{
    T1 roll_no;
    T2 name;
    public:
        Student(T1 roll_no, T2 name){
            this->roll_no = roll_no;
            this->name = name;
        }

        void display(){
            cout<<"Roll No :"<<roll_no<<endl;
            cout<<"Name : "<<name<<endl;
        }

};

int main(){
    Student<int,string> s1(101,"vikrant");
    s1.display();
    return 0;
}