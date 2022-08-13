// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

// A =     10 20 30
//         40 50 60
//         70 80 90

// B =     1 2 3
//         4 5 6
//         7 8 100

// Sub =   9 18 27
//         36 45 54
//         63 72 -10

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

    while (c1 != r2)
    {
        cout << "First matrix column number should be equal to second Matrix row number" << endl;
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
            cout << A[i][j] << " ";
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
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    cout << "Sub = ";

    for (int i = 0; i < r1; i++)
    {

        cout << "\t";

        for (int j = 0; j < c1; j++)
        {
            cout << A[i][j] - B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}