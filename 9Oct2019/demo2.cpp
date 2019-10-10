#include<iostream>
using namespace std;

int main(){
    int i=1;
    
    while(i<=5){
        if(i==3){
            continue;
        }
        cout<<i<<endl;
        i++;
    }

    // do{
    //     cout<<i<<endl;//1,2,3
    //     i++;//2,3,6
    //     break;
    //     continue;
    // }while(i<=5);//3<5

    return 0;
}