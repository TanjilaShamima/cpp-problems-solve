// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

// get 10 students marks
// calculate sum of the marks
// calculate average marks
// calculate maximum marks
// calculate minimum marks

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int number;
    cin >> number;

    int sum = 0;
    float avg = 0;

    int students[number];
    int max = students[0];
    int min = students[number];

    for (int i = 0; i < number; i++)
    {
        cin >> students[i];
        sum+= students[i];
    }

    cout << "Sum : "<< sum << endl;
    cout << "Average : "<< fixed << setprecision(3) << sum/number << endl;

    for (int i = 0; i < number; i++)
    {
        if(max < students[i]) {
            max = students[i];
        }
        if(min > students[i]) {
            min = students[i];
        }
    }

    cout << "Max : "<< max << endl;
    cout << "Min : "<< min << endl;

    return 0;
}