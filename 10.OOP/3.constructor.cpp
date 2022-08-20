// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/


//Constructor
// Special type of function
// Name will be same like className
// Need not add any return type
// Need not call this function
// assign object value


#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class Employee
{
    public:
        int eId;
        string eName;
        double eSalary;

        void display()
        {

            cout << "Employee ID : " << eId << "   Employee Name: " << eName << "   Employee Salary : " << eSalary << endl;
        }

        Employee(int eId, string eName, double eSalary) {
            this->eId = eId;
            this->eName = eName;
            this->eSalary = eSalary;
        }

        Employee() {
            cout << "Default" << endl;
        }
};

int main()
{   
    Employee noParameter;

    Employee first(11189, "Tanjila Shamima", 50000.00);
    first.display();

    Employee second(11190, "Imamul Hassan", 50000.00);
    second.display();


    return 0;
}