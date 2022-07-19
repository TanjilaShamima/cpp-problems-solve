// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

// check a number is palindrome or not

/*
 let digit = 456
 reverse = 654

 if digit == reverse then palindrome or not
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
        sum = sum * 10 + rem;
    }

    if(num == sum) cout << num <<" is a palindrome number" << endl;
    else cout << num <<" is not a palindrome number" << endl;

    return 0;
}
