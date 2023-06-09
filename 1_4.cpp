#include <iostream>
using namespace std; 


class student{
    string name;
    int rollno;
    string degree;
    string hostel;
    float CurrentCGPA;

    public:

        student(){
            cout<<"Constructor ";
        }

        student(string name, int rollno){
            cout<<"Constructor 2";

        }

        void addDetails(string n, int r, string d, string h, float c){

            name = n;
            rollno = r;
            degree = d;
            hostel = h;
            CurrentCGPA = c;

            cout<<"Details Added";
            updateDetails();
        }

        void updateDetails(){
            
            char ans;
            cout << "Do you want to update Details: ";
            cin>>ans;
            if(ans == 'Y' || ans == 'y'){
                int choice;
                cout<<"Enter Choice \n 1. Update CGPA \n 2. Update Hostel";
                cin>>choice;
                if(choice == 1){
                    //student s;
                    updateCGPA();
                }
                else{
                    updateHostel();
                }
            } 
            else{
                exit;
            }
                
        }

        void updateCGPA(){

            float newCGPA;

            cout << "Update CGPA \n EnterNewCGPA";
            cin>>newCGPA;

            CurrentCGPA = newCGPA;

            cout<<"Updated CGPA: "<<CurrentCGPA;
        }

        void updateHostel(){


        }
        void displayDetails(){

        

        }
};

int main(){
    student s; 
    s.addDetails("Dhruv", 1, "COE", "K", 9.0);


}