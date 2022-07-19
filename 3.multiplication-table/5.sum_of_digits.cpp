// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

// Sum of digits

/*
 let digit = 456
 sum = 4 + 5 + 6 = 15
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

    while (test != 0)
    {
        rem = test % 10;
        div = test / 10;
        test = div;
        sum += rem;
    }

    cout << "Sum of digit " << num << "  = " << sum << endl;

    return 0;
}
