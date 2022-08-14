// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class Student {
    public : 
        int id;
        string name;
        double gpa;

        void setValue(int x, string y, double z){
            id = x;
            name = y;
            z = gpa;
        }

        void display() {
            cout << "Id = " << id << "    Name = " << name << "     CGPA : " << gpa  << endl;
        }
};

int main() {
    Student first, second, third;
    first.setValue(101, "Shamima", 3.7);
    first.display();

    second.setValue(102, "Imam", 3.8);
    second.display();

    third.setValue(103, "Janina", 3.2);
    third.display();

    return 0;
}