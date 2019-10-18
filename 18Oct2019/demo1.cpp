#include<iostream>
using namespace std;

class ComplexNumber{
    //instance variable
    int real;
    int imaginary;

    public:
        ComplexNumber(){

        }
        ComplexNumber(int real,int imaginary){
            this->real = real;
            this->imaginary = imaginary;
        }

        void add(ComplexNumber c1,ComplexNumber c2){
            this->real = c1.real + c2.real;
            this->imaginary = c1.imaginary + c2.imaginary;

            cout<<"Complex Number :  "<<this->real<<"+"<<this->imaginary<<"i"<<endl;
        }


};

int main(){
    ComplexNumber c1(4,3),c2(2,3),c3;
    c3.add(c1,c2);

    return 0;
}