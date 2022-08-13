// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/



#include<iostream>
#include<iomanip>

using namespace std;

int main () {
    int a, b;
    a = 100;
    b = 200;

    int *c,  *d;
    c = &a;
    d = &b;

    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;
    cout << "&c = " << &c << endl;
    cout << "&d = " << &d << endl;
    cout << "*c = " << *c << endl;
    cout << "*d = " << *d << endl;


    return 0;
}