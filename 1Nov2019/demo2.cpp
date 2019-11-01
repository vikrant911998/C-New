#include<iostream>
using namespace std;

template <typename T>
T add(T x, T y){
    return x+y;
}

int main(){

    cout<<"SUM : "<<add('#','@')<<endl;

    return 0;
}