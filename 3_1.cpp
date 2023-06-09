#include <iostream>
using namespace std;

class rectangle{
    int length;
    int width;

    public:
        rectangle(){
            cout << "Default Constructor";
        }

        rectangle(int l, int w){
            length = l;
            width = w;
            
            int area = length * width;
            cout << "The Area is: " << area << endl;
        }

        rectangle(int l){
            length = l;
            width = l;

            int area = length * width;
            cout << "The Area is: " << area << endl;
        }


};



int main(){

    rectangle r3();
    rectangle r(1,2);
    rectangle r1(1);
    

}