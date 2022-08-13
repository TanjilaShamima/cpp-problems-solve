// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

// fibonacci series
//  a[0] = 0;
//  a[1] = 1
//  a[2] = a[0] + a[1]

// a[i] = a[i-2] + a[i-1]


#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<math.h>

using namespace std;

int main() {

    int num;
    cin >> num;

    int arr[num];

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < num; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }

    for(int i = 0; i< num; i++) {
        cout << arr[i]<< endl;
    }
    

    return 0;
}