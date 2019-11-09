#include<iostream>
using namespace std;

class A{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        A(){
            cout<<"Inside Parent Constructor"<<endl;
            a=1;
            b=2;
            c=3;
        }
};

class B:public A{
    public:
        B(){
          
        }
        void display(){
            cout<<this->b<<endl;
            cout<<this->c<<endl;
        }
};

int main(){
    B obj;
    obj.display();
    // cout<<obj.<<endl;

    return 0;
}