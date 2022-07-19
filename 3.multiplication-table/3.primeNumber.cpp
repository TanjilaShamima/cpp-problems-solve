// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

// Prime Number finding

/*
 if num = 10
 if this num is divided by only 1 and the number then it will be prime number otherwise not.
 logic is = start a loop from 2 and before the number if number of divided value is 0 then prime number or not.
*/

#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{

    int num, count = 0;
    cin >> num;

    for (int i = 2; i < num; i++)
    {
        if(num%2 == 0) count ++;
    }

    if( count == 0) cout << num << " is Prime Number" << endl;
    else  cout << num << " is not prime number" << endl;

    return 0;
}
