#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

using namespace std;

void stationing(char a[3][3])
{
    char arr[8]{ '1', '2', '3', '4', '5', '6', '7','8' }; 
    char pos[9]{ ' ',' ',' ',' ',' ',' ',' ',' ',' ' };

    for (int i = 0; i < 8; i++)
    {
        cout << "\n\t*** Пятнашки ***" << endl << endl;
        int num, v = 0;
        if (pos[0] == ' ')
            printf("\t  \033[1;31m 1 \033[0m|");
        else
            cout << "\t   " << a[0][0] << " |";
        if (pos[1] == ' ')
            printf("\033[1;31m 2 \033[0m|");
        else
            cout << " " << a[0][1] << " |";
        if (pos[2] == ' ')
            printf("\033[1;31m 3 \033[0m\n");
        else
            cout << " " << a[0][2] << endl;
        cout << "\t  ---+---+---" << endl;


        if (pos[3] == ' ')
            printf("\t  \033[1;31m 4 \033[0m|");
        else
            cout << "\t   " << a[1][0] << " |";
        if (pos[4] == ' ')
            printf("\033[1;31m 5 \033[0m|");
        else
            cout << " " << a[1][1] << " |";
        if (pos[5] == ' ')
            printf("\033[1;31m 6 \033[0m\n");
        else
            cout << " " << a[1][2] << endl;
        cout << "\t  ---+---+---" << endl;


        if (pos[6] == ' ')
            printf("\t  \033[1;31m 7 \033[0m|");
        else
            cout << "\t   " << a[2][0] << " |";
        if (pos[7] == ' ')
            printf("\033[1;31m 8 \033[0m|");
        else
            cout << " " << a[2][1] << " |";
        if (pos[8] == ' ')
            printf("\033[1;31m 9 \033[0m\n");
        else
            cout << " " << a[2][2] << endl;

        cout << "\n Выберите расположение для [" << arr[i] << "]" << endl;
        cin >> num;
        system("cls");
        if (pos[num - 1] == ' ')
        {
            swap(arr[i], pos[num - 1]);
        }
        else
            i--;

        for (int y = 0; y < 3; y++)
        {
            for (int x = 0; x < 3; x++)
            {
                a[y][x] = pos[v];
                v++;
            }
        }
    }
    
}

void stationingB(char a[3][3])
{
    char arr[8]{ '1', '2', '3', '4', '5', '6', '7','8' };
    char pos[9]{ ' ',' ',' ',' ',' ',' ',' ',' ',' ' };

    for (int i = 0; i < 8; i++)
    {
        int num, v = 0;
        num = rand() % 9;
        system("cls");
        if (pos[num] == ' ')
        {
            swap(arr[i], pos[num]);
        }
        else
            i--;

        for (int y = 0; y < 3; y++)
        {
            for (int x = 0; x < 3; x++)
            {
                a[y][x] = pos[v];
                v++;
            }
        }
    }
}