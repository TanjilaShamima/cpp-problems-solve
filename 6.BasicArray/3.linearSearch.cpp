// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

// Linear Search from an array

// arr[5] = {20, 10, 12, 14, 15}

// position of 12 ?

#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{

    int num, value;

    cin >> num;

    int pos = -1;

    int array[num];

    for (int i = 0; i < num; i++)
    {
        cin >> array[i];
    }

    cout << "Searching value is : ";
    cin >> value;

    for (int i = 0; i < num; i++)
    {
        if (value == array[i])
        {
            pos = i + 1;
            break;
        }
    }

    if (pos == -1)
    {
        cout << value << " is not found in this array" << endl;
    }
    else
    {
        cout << "Position of " << value << " is : " << pos << endl;
    }

    return 0;
}