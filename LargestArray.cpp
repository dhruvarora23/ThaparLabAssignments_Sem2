#include <iostream>
using namespace std; 

class data{
    int a;

    public:
        void getdata(){
            cout << "Enter Number: ";
            cin >> a;

            cout<<a;
        }



};

int main(){

    data d[5];

    for(int i = 0; i < 5; i++){
        d[i].getdata();
    }

}