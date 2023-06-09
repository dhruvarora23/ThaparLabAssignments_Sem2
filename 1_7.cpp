#include <iostream>
using namespace std;

class complex{
    int a;
    int b;

    public:
        void set(int x, int y){
            a = x;
            b = y;
        }

        void display(){
            cout << "The complex number is: " << a << " + " << b << "i"<<endl;
        }

        complex sum(complex c1, complex c2){
            complex temp;

            temp.a = c1.a + c2.a;
            temp.b = c1.b + c2.b;
            return temp;
            
            
        }

};

int main(){
    complex c1, c2, c3, c4;
    
    c1.set(10,10);
    c2.set(20,20);

    c4=c3.sum(c1, c2);
    
    c4.display();
}