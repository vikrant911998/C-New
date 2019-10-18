#include<iostream>
using namespace std;

int main(){ 
    int a[] = {23,12,34,54,61,7};
    int max = a[0];
    int min = a[0];
    for(int i=1;i<6;i++){
        if(a[i]>max){
            max = a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
    }
    cout<<"Max element: "<<max<<endl;
    cout<<"Min element: "<<min<<endl;
    return 0;
}