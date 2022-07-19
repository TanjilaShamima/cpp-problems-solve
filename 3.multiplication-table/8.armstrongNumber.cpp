// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

// check a number is armstrong or not

/*
 let digit = 153
 sum = 1^3 + 5^3 + 3^3
 if digit == sum then armstrong or not
*/

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include<math.h>

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
        sum = sum+ pow(rem, 3);
    }

    if(num == sum) cout << num <<" is a armstrong number" << endl;
    else cout << num <<" is not a armstrong number" << endl;

    return 0;
}
