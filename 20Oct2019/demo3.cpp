#include<iostream>
using namespace std;

class Account{
    int id;
    string name;
    string address;
    int age;
    long mobile_no;

    public:
        void input(){
            cout<<"Enter the id"<<endl;
            cin>>this->id;
            cout<<"Enter the name"<<endl;
            cin>>this->name;
            cout<<"Enter the address"<<endl;
            cin>>this->address;
            cout<<"Enter the age"<<endl;
            cin>>this->age;
            cout<<"Enter the mobile no"<<endl;
            cin>>mobile_no;

        }
        void display(){
            cout<<"Bank ID: "<<this->id<<endl;
            cout<<"Name : "<<this->name<<endl;
            cout<<"Address : "<<this->address<<endl;
            cout<<"Age : "<<this->age<<endl;
            cout<<"Mobile No: "<<this->mobile_no<<endl;
        }
};

//SINGLE INHERITANCE
class SavingAccount:public Account{
    string type_of_account;
    int rate_of_interest;
    public:
        SavingAccount(){
            this->type_of_account = "SAVING ACCOUNT";
            this->rate_of_interest = 5;
        }
        void display1(){
            cout<<"Account Type : "<<type_of_account<<endl;
            cout<<"Rate of Interest : "<<rate_of_interest<<"%"<<endl;
        }
};

class CurrentAccount:public Account{
    string type_of_account;
    int rate_of_interest;
    public:
        CurrentAccount(){
            this->type_of_account = "CURRENT ACCOUNT";
            this->rate_of_interest = 10;
        }
        void display1(){
            cout<<"Account Type : "<<type_of_account<<endl;
            cout<<"Rate of Interest : "<<rate_of_interest<<"%"<<endl;
        }
};


int main(){
    // Bank obj;
    // obj.input();
    // obj.display();

    SavingAccount obj;
    obj.input();
    cout<<endl;
    cout<<"DETAILS : "<<endl;
    obj.display();
    obj.display1();

    CurrentAccount obj1;
    obj1.input();
    cout<<endl;
    cout<<"DETAILS : "<<endl;
    obj1.display();
    obj1.display1();

    return 0;
}