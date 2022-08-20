//Encapsulation
//Encapsulation is the process of combining the data and the functions that operate on the data to form a single unit.


#include <iostream>
#include <iomanip>
#include <string.h>


using namespace std;

class Student {
    public:
        int stID;
        string name;
        double cgpa;
    

    Student(int stID, string name, double cgpa) {
        this ->stID = stID;
        this ->name = name;
        this ->cgpa = cgpa;
    }

    void display () {
        cout << "ID : " << stID << endl;
        cout << "Name : " << name << endl;
        cout << "CGPA : " << cgpa << endl;
    }


};



int main() {
    Student shamima(101, "Shamima", 3.87);
    shamima.display();

    return 0;
}