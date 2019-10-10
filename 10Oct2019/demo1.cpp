#include<iostream>
using namespace std;

int main(){
    int i=1;

    do{
        if(i == 4)
            continue;

        cout<<i<<endl;
        i++;
    }while(i<=5);

    return 0;
}