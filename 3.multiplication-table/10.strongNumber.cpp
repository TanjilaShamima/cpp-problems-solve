// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

// number is strong or not

/*
 let number = 145
 sum = factorial(1) + factorial(4) + factorial(5)
 number == sum ==> strong otherwise not
*/

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{

    int num, rem, div, sum=0, fact;

    cin >> num;

    int test = num;

    while (test != 0)
    {
        rem = test % 10;
        div = test / 10;
        test = div;
        fact = 1;
        for(int i =1; i<= rem; i++) {
            fact*= i;
        }

        sum += fact;
    }

    if(num == sum) cout << num <<" is a strong number" << endl;
    else cout << num <<" is not a strong number" << endl;

    return 0;
}
