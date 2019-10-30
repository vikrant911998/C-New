#include<iostream>
using namespace std;

class A{
	public:
		void f1(){
			cout<<"f1 of class A"<<endl;
		}
		virtual void f2(){
					cout<<"f2 of class A"<<endl;
				}
		virtual void f3(){
					cout<<"f3 of class A"<<endl;
				}
		void f4(){
					cout<<"f4 of class A"<<endl;
				}
};

class B:public A{
public:
		void f1(){
			cout<<"f1 of class B"<<endl;
		}
		void f2(){
					cout<<"f2 of class B"<<endl;
				}
		void f3(){
					cout<<"f3 of class B"<<endl;
				}
		void f4(string s){
					cout<<"f4 of class B"<<endl;
				}
};


int main(){

	B obj;
	A *p;
    p= &obj;

	p->f1();
	p->f2();
	p->f3();
	p->f4();

	return 0;
}




