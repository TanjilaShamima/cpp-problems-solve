// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

// number of digits

/*
 let digit = 153
 numOfDigits = 3
*/

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{

    int num, count = 0, rem, div;

    cin >> num;

    int test = num;

    while (test != 0)
    {
        rem = test % 10;
        div = test / 10;
        test = div;
        count++;
    }

    cout << "Number of digits in " << num << " : " << count << endl;

    return 0;
}
