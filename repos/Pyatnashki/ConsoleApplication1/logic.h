#pragma once
#include <iostream> 
#include "vision.h"
  
using namespace std;

int logic(char arra[3][3])
{
    int  winCount = 0;
    char arr[9]{ '1', '2', '3', '4', '5', '6', '7', '8', ' ' };
    char numb;
    int counter = 0;
    
    
    while (winCount != 9)
    {
        int v = 0;
        winCount = 0;
        for (int y = 0; y < 3; y++)
            for (int x = 0; x < 3; x++)
            {
                if (arr[v] == arra[y][x])
                    winCount++;
                v++;
            }
        if (winCount==9)
            break;
        cout << "\n Выберите цифру которую двигаем: ";
        cin >> numb;
        int y1, x1;
        for (int y = 0; y < 3; y++)
            for (int x = 0; x < 3; x++)
            {
                if (numb == arra[y][x])
                {
                    y1 = y;
                    x1 = x;
                }
            }
        if (arra[y1 - 1][x1] == ' ')
            swap(arra[y1 - 1][x1], arra[y1][x1]);
        else if (arra[y1 + 1][x1] == ' ')
            swap(arra[y1 + 1][x1], arra[y1][x1]);
        else if (arra[y1][x1 - 1] == ' ')
            swap(arra[y1][x1 - 1], arra[y1][x1]);
        else if (arra[y1][x1 + 1] == ' ')
            swap(arra[y1][x1 + 1], arra[y1][x1]);
        else
        {
            system("cls");
            cout << " Неправильная позиция\n";
            vision(arra);
            continue;
        }

        system("cls");
        vision(arra);
        counter++;

        for (int y = 0; y < 3; y++)
            for (int x = 0; x < 3; x++)
            {
                if (arr[v] == arra[y][x])
                    winCount++;
                v++;
            }
        if (winCount == 9)
            break;
    }
    return counter;
}

int logicF(string a[4][4], int ar[4][4])
{
    int  winCount = 0;
    int arr[16]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0};
    int numb;
    int counter = 0;
    
    
    while (winCount != 16)
    {
        int v = 0;
        winCount = 0;
        for (int y = 0; y < 4; y++)
            for (int x = 0; x < 4; x++)
            {
                if (arr[v] == ar[y][x])
                    winCount++;
                v++;
            }
        if (winCount==16)
            break;
        cout << "\n Выберите цифру которую двигаем: ";
        cin >> numb;
        int y1, x1;
        for (int y = 0; y < 4; y++)
            for (int x = 0; x < 4; x++)
            {
                if (numb == ar[y][x])
                {
                    y1 = y;
                    x1 = x;
                }
            }
        if (ar[y1 - 1][x1] == 0)
        {
            swap(a[y1 - 1][x1], a[y1][x1]);
            swap(ar[y1 - 1][x1], ar[y1][x1]);
        }
        else if (ar[y1 + 1][x1] == 0)
        {
            swap(a[y1 + 1][x1], a[y1][x1]);
            swap(ar[y1 + 1][x1], ar[y1][x1]);
        }
        else if (ar[y1][x1 - 1] == 0)
        {
            swap(a[y1][x1 - 1], a[y1][x1]);
            swap(ar[y1][x1 - 1], ar[y1][x1]);
        }
        else if (ar[y1][x1 + 1] == 0)
        { 
            swap(a[y1][x1 + 1], a[y1][x1]);
            swap(ar[y1][x1 + 1], ar[y1][x1]);
        }
        else
        {
            system("cls");
            cout << " Неправильная позиция\n";
            visionF(a);
            continue;
        }

        system("cls");
        visionF(a);
        counter++;

        for (int y = 0; y < 4; y++)
            for (int x = 0; x < 4; x++)
            {
                if (arr[v] == ar[y][x])
                    winCount++;
                v++;
            }
        if (winCount == 16)
            break;
    }
    return counter;
}