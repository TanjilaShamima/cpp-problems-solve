// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

// Pattern problem solve

/*
 pattern:
 D D D D
 C C C
 B B
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
    char value = 65 + (num-1);

    for (int row = num; row >= 1; row--)
    {
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
        }
        value--;
    }

    return 0;
}
