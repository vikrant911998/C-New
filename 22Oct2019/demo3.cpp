#include<iostream>
using namespace std;

class Customer{
    string name;
    int age;
    string address;
    public:
        void customerInput(){
            cout<<"Enter the name"<<endl;
            cin>>name;
            cout<<"Enter the age"<<endl;
            cin>>age;
            cout<<"Enter the address"<<endl;
            cin>>address;
        }
        void customerDisplay(){
            cout<<"Name : "<<this->name<<endl;
            cout<<"Age : "<<this->age<<endl;
            cout<<"Address : "<<this->address<<endl;
        }
};

class Account{
    string type_of_account;
    public:
        void accountInput(){
            cout<<"Enter the account type"<<endl;
            cin>>type_of_account;
        }
        void accountDisplay(){
            cout<<"Account Type : "<<this->type_of_account<<endl;
        }
};


class RBI{
    int roi;
    public:
        Customer customer;
        Account account;
        float getInterestRate(){
            
        }
        float getWithdrawalLimit(){

        }
};

class SBI:public RBI{
    public:
        float getInterestRate(){
            return 7.5;   
        }
        float getWithdrawalLimit(){
            return 20000;
        }

};

int main(){
    SBI object;
    object.customer.customerInput();
    object.account.accountInput();

    object.customer.customerDisplay();
    object.account.accountDisplay();
    cout<<"Rate Of Interest : "<<object.getInterestRate()<<"%"<<endl;
    cout<<"Withdrawal Limit : "<<object.getWithdrawalLimit()<<endl;
    return 0;
}