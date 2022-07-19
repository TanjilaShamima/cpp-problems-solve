// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

//create a multiplication table

/*
 3 * 1 = 3
..........
..........
 3 * 10 = 30

*/


#include<iostream>
#include<stdio.h>
#include<iomanip>

using namespace std;

int main() {

    int num;
    cin >> num;

    for(int i =1; i <= 10; i++) {
        cout << num << " X " << i << " = " << num * i << endl;
    }

    return 0;
}


