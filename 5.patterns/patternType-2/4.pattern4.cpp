// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

// Pattern problem solve

/*
 pattern:
 A B C D
 A B C
 A B
 A
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
        char value = 65;
        for (int col = 1; col <= row; col++)
        {
            if (col < row)
            {
                cout << value << " ";
            }

            else
            {
                cout << value << endl;
            }

            value++;
        }
    }

    return 0;
}
