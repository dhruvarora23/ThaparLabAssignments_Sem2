#include <iostream>
using namespace std; 

int passbyvalue(int a, int b){
    
    cout<<"Passing by value"<<endl;
    return a + b;
}

int passbyreference(int &a, int &b){
    cout<<"Passing by reference"<<endl;
    return a + b;
}

int main(){
    int a = 1;
    int b = 2;

    cout<<"sum is: "<<passbyvalue(1, 2)<<endl;
    cout<<"sum is: "<<passbyreference(a, b)<<endl;



}