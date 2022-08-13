// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    int r, c;

    cin >> r >> c;

    int matrix[r][c];
    // int matrixNew[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    cout << "A = ";

    for (int i = 0; i < r; i++)
    {

        cout << "\t";

        for (int j = 0; j < c; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}