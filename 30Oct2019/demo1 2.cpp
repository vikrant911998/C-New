#include<iostream>
using namespace std;

class A{
	public:
		virtual void play(){
			cout<<"play of class A"<<endl;
		}
};

class B:public A{
	public:
		void play(){
				cout<<"play of class B"<<endl;
			}
		void play1(){
			cout<<"play1 of class B"<<endl;
		}
};

int main(){
	B obj;
	A *p;
	p = &obj;

//	obj.plas
	p->play();



	return 0;
}





