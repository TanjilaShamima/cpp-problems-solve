// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima


#include<iostream>
#include<stdio.h>
#include<iomanip>

using namespace std;

int main() {

    float a, b;
    cin >> a >> b;

    float sum = a + b;
    float sub = a - b;
    float mul = a * b;
    float div = a/b;
    float rem = int(a) / int (b);

    // showpoint

    cout << showpoint << sum << endl;

    //notshowpoint

    cout << noshowpoint << sum << endl;

    //setprecision

    cout << setprecision(3) << div << endl;

    //fixed

    cout << fixed;
    cout << setprecision(3) << div << endl;


    //setw
    cout << setw(20) << "Multiapplication : " << mul << endl;


    return 0;
}