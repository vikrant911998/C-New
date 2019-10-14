#include<iostream>
using namespace std;
//function declaration or Prototype
void add();



//Main function
int main(){
    //function calling
    add();

    return 0;
}

//function definition(without return type and without argument)
void add(){
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"Sum : "<<a+b<<endl;

}

