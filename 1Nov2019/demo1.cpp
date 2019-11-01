#include<iostream>
using namespace std;


class Student{
    int height;
    public:
        void input(){
            cout<<"Enter the height"<<endl;
            cin>>height;
        }
        int getHeight(){
            return this->height;
        }
};

int main(){
    Student list[5];
    Student s;
    float average=0.0;


    for(int i=0;i<5;i++){
        s.input();
        list[i] = s;
    } 

    for(int i=0;i<5;i++){
        average = average + list[i].getHeight();
    }

    cout<<"Average Height : "<<average/5<<endl;

    return 0;
}