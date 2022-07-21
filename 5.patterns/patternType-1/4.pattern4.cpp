// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

// Pattern problem solve

/*
 pattern:
 A
 A B
 A B C
 A B C D
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

    for (int row = 1; row <= num; row++)
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
