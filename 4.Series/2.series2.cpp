// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

// series problem solve

/*
 series = 1*2 + 2*3 + ----- + n1 * n2
*/

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{

    int num1, num2, sum = 0;

    cin >> num1 >> num2;


    for(int i = 1, j=2; i <= num1, j<=num2; i++, j++) {
        sum+=(i*j);
    }

    cout <<"SUM = "<< sum << endl;

    return 0;
}
