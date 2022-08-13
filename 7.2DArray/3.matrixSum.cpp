// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/


// A =     1 2 3
//         4 5 6
//         7 8 9


// B =     10 11 12
//         13 14 15
//         16 17 18


// Sum =   11 13 15
//         17 19 21
//         23 25 27




#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    int r1, c1, r2, c2;

    cin >> r1 >> c1;
    cin >> r2 >> c2;

    while (c1 != c2 && r1 != r2)
    {
        cout << "First matrix row should be equal to second Matrix row";
        cout << "First matrix column should be equal to second Matrix column";
        cin >> r1 >> c1;
        cin >> r2 >> c2;
    }

    int A[r1][c1];
    int B[r2][c2];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
    }
    cout << endl;
    cout << endl;


    cout << "A = ";

    for (int i = 0; i < r1; i++)
    {

        cout << "\t";

        for (int j = 0; j < c1; j++)
        {
            cout << A[i][j]<< " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;

    cout << "B = ";

    for (int i = 0; i < r1; i++)
    {

        cout << "\t";

        for (int j = 0; j < c1; j++)
        {
            cout <<B[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    cout << "Sum = ";

    for (int i = 0; i < r1; i++)
    {

        cout << "\t";

        for (int j = 0; j < c1; j++)
        {
            cout << A[i][j] + B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}