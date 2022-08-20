// Abstraction is the concept of object-oriented programming that "shows" only essential attributes and "hides" unnecessary information. The main purpose of abstraction is hiding the unnecessary details from the users. 

#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class People
{
public:
    string name;
    int age;

    People(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

class Student : public People
{
    public:
        int id;
        double cgpa;

        Student(int id, double cgpa): People(name, age)
        {
            this ->id = id;
            this->cgpa = cgpa;
        }

        void display2() {
            cout << "Id : " << id << endl;
            display();
            cout << "CGPA : " << cgpa << endl;
        }
};

int main()
{
    Student s1(1, 3.87);
    s1.name = "Shamima";
    s1.age = 25;
    s1.display2();

    return 0;
}