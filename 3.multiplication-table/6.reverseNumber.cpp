// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

// Reverse a number

/*
 let digit = 456
 reverse = 654
*/

#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{

    int num, sum = 0, rem, div;

    cin >> num;

    int test = num;

    cout << "Reverse of " << num << " = ";

    while (test != 0)
    {
        rem = test % 10;
        div = test / 10;
        test = div;
        cout << rem;
    }

    cout << endl;

    return 0;
}
