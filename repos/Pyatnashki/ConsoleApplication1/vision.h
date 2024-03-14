#pragma once
#include <iostream>   
#include <fcntl.h>   
using namespace std;

void vision(char a[3][3])
{
    cout << "\n\t*** Пятнашки ***" << endl << endl;
    cout << "  " << a[0][0] << " | " << a[0][1] << " | " << a[0][2] << endl;
    cout << " ---+---+--- " << endl;
    cout << "  " << a[1][0] << " | " << a[1][1] << " | " << a[1][2] << endl;
    cout << " ---+---+---" << endl;
    cout << "  " << a[2][0] << " | " << a[2][1] << " | " << a[2][2] << endl;
}
void visionF(string a[4][4])
{
    cout << "\n\t*** Пятнашки ***" << endl << endl;
    cout << "       " << a[0][0] << " | " << a[0][1] << " | " << a[0][2] << " | " << a[0][3] << endl;
    cout << "      ----+----+----+---- " << endl;
    cout << "       " << a[1][0] << " | " << a[1][1] << " | " << a[1][2] << " | " << a[1][3] << endl;
    cout << "      ----+----+----+----" << endl;
    cout << "       " << a[2][0] << " | " << a[2][1] << " | " << a[2][2] << " | " << a[2][3] << endl;
    cout << "      ----+----+----+----" << endl;
    cout << "       " << a[3][0] << " | " << a[3][1] << " | " << a[3][2] << " | " << a[3][3] << endl;
}