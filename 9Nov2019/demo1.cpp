#include<iostream>
using namespace std;

class Complex{
    int real,imaginary;
    public:
        void input(int real, int imaginary){
            this->real = real;
            this->imaginary = imaginary;
        }

        // void add(Complex c1, Complex c2){
        //     this->real = c1.real+c2.real;
        //     this->imaginary = c1.imaginary+c2.imaginary;
        // }

        void display(){
            cout<<real<<"+"<<imaginary<<"i"<<endl;
        }
        Complex operator +(Complex c){
            Complex temp;
            temp.real = this->real+c.real;
            temp.imaginary = this->imaginary+c.imaginary;

            return temp;
        }
};

int main(){
    Complex c1,c2,c3;
    c1.input(2,3);
    c2.input(3,4);

    // c3.add(c1,c2);
    // c3 = c1.operator+(c2);
    c3 = c1 + c2;
    c3.display();

    return 0;
}