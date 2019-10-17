#include<iostream>
using namespace std;

class Rectangle{
    private:
        //instance variable  
        int length, breadth;
    public:
        Rectangle(int length, int breadth){
            this->length = length;
            this->breadth = breadth;
        }

        void area(){
            cout<<"Area : "<<length*breadth<<endl;
        }

};


int main(){
    Rectangle r1(4,8);
    r1.area();
   

    return 0;
}