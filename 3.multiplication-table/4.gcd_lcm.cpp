// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

// GCD = Greatest Common Divisor
// LCM = Least Common Multiple

/*
 n1 = 29
 n2 = 5
 n1 % n2 = rem
 29 % 5 = 4
 n1 = n2
 n2 = rem
 5 % 4 = 1;
 4 % 1 = 0
 1 % 0

 now gcd = 1 ( when n2 == 0)
 lcm = n1 * n2 / gcd
*/

#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{

    int n1, n2, test1, test2, rem, gcd, lcm;
    cin >> n1>> n2;

    if (n1 > n2)
    {
        test1 = n1;
        test2 = n2;
    }
    else
    {
        test1 = n2;
        test2 = n1;
    }

    while (test2 != 0)
    {
        rem = test1 % test2;
        test1 = test2;
        test2 = rem;
    }

    gcd = test1;
    lcm = (n1 * n2) / gcd;

    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}
