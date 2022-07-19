// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

// finding the factorial of a number

/*
 if num = 10
 factorial = 10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1
 logic is = num * ( num - 1) * ------------ * 1

*/

#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{

    int num, sum = 1;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        sum *= i;
    }

    cout << "Factorial of " << num << " = " << sum << endl;

    return 0;
}
