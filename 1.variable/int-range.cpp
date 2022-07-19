#include<iostream>
#include<iomanip>
#include<stdio.h>

using namespace std;

int main() {

    int positiveRange = 32767;
    int negativeRange = -32768;

    int res1 = positiveRange + 1;
    int res2 = negativeRange - 1;

    cout << positiveRange << " + 1 = " << res1 << endl;
    cout << negativeRange << " -1  = " << res2 << endl;


    return 0;
}