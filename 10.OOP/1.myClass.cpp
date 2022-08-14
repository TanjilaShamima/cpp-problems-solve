// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class Student
{
    public:
        int id;
        string name;
        double gpa;
        void display()
        {
            cout << "Id : " << id << "    Name : " << name << "     CGPA : " << gpa << endl;
        }
};

int main()
{

    Student first, second, third;

    first.id = 1;
    first.name = "Shamima";
    first.gpa = 3.5;
    first.display();

    second.id = 2;
    second.name = "Mithi";
    second.gpa = 3.2;
    second.display();

    third.id = 3;
    third.name = "Ritu";
    third.gpa = 3.6;
    third.display();

    return 0;
}