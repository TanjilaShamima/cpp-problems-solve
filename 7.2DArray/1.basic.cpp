// Tanjila Shamima
// Software Engineer at BJIT Group
// uri online problem solved by Tanjila Shamima
// https://tanjila-shamima.web.app/

//getting input from user
//print the value


#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<math.h>

using namespace std;

int main() {
    int rowNum, colNum;

    cout <<"Enter the number of row and column : ";

    cin >> rowNum >> colNum;

    int array[rowNum][colNum];



    // Getting input from the user
    for (int i = 0; i < rowNum; i++)
    {
        for(int j = 0; j< colNum; j++) {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < rowNum; i++)
    {
        for (int j = 0; j < colNum; j++)
        {
            cout << array[i][j] << " ";
        }

        cout << endl;
        
    }
    

    for (int i = 0; i < rowNum; i++)
    {
        for (int j = 0; j < colNum; j++)
        {
            cout << "Array[" << i << "][" << j << "] = " << array[i][j] << endl;
        }
        
    }
    

    return 0;
}