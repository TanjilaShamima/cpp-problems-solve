// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

// Pattern problem solve

/*
 pattern:
 1
 0 0
 1 1 1
 0 0 0 0
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
        for (int col = 1; col <= row; col++)
        {
            if (col < row)
            {
                if(row % 2 == 0) cout << "0" << " ";
                else cout << "1" << " ";
            }

            else
            {
                if(row % 2 == 0) cout << "0" << endl;
                else cout << "1" << endl;
            }
        }
    }

    return 0;
}
