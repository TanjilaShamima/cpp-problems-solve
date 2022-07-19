// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

// series problem solve

/*
 series = 1 + 2 + 3 + 4 + 5 + ------- + N
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


    for(int i = 1; i <= num; i++) {
        sum+=i;
    }

    cout <<"SUM = "<< sum << endl;

    return 0;
}
