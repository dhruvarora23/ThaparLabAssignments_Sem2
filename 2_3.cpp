#include <iostream>
using namespace std;

inline int cube(int a){
    int cube = a * a * a;
    return cube;
}

int main(){

    cout<<cube(5);
    return 0;
}