// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

// Pattern problem solve

/*
 pattern:
 1 2 3 4
 1 2 3
 1 2
 1
*/

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{

    int num, sum = 0;

    cin >> num;

    for (int row = num; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            if (col < row)
                cout << col << " ";
            else
                cout << col << endl;
        }
    }

    return 0;
}
