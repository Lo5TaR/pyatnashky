#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

using namespace std;

void stationingF(string a[4][4], int ar[4][4])
{
    int arr[15]{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
    int pos[16]{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

    for (int i = 0; i < 15; i++)
    {
        cout << "\n\t*** Пятнашки ***" << endl << endl;
        int num, v = 0;
        if (pos[0] == 0)
            printf("\t\033[1;31m1 \033[0m|");
        else
            cout << "       " << a[0][0] << " |";
        if (pos[1] == 0)
            printf("\033[1;31m  2 \033[0m|");
        else
            cout << " " << a[0][1] << " |";
        if (pos[2] == 0)
            printf("\033[1;31m  3 \033[0m|");
        else
            cout << " " << a[0][2] << " |";
        if (pos[3] == 0)
            printf("\033[1;31m  4 \033[0m\n");
        else
            cout << " " << a[0][3] << endl;
        cout << "      ----+----+----+----" << endl;


        if (pos[4] == 0)
            printf("\t\033[1;31m5 \033[0m|");
        else
            cout << "       " << a[1][0] << " |";
        if (pos[5] == 0)
            printf("\033[1;31m  6 \033[0m|");
        else
            cout << " " << a[1][1] << " |";
        if (pos[6] == 0)
            printf("\033[1;31m  7 \033[0m|");
        else
            cout << " " << a[1][2] << " |";
        if (pos[7] == 0)
            printf("\033[1;31m  8 \033[0m\n");
        else
            cout << " " << a[1][3] << endl;
        cout << "      ----+----+----+----" << endl;


        if (pos[8] == 0)
            printf("\t\033[1;31m9 \033[0m|");
        else
            cout << "       " << a[2][0] << " |";
        if (pos[9] == 0)
            printf("\033[1;31m 10 \033[0m|");
        else
            cout << " " << a[2][1] << " |";
        if (pos[10] == 0)
            printf("\033[1;31m 11 \033[0m|");
        else
            cout << " " << a[2][2] << " |";
         if (pos[11] == 0)
            printf("\033[1;31m 12 \033[0m\n");
        else
            cout << " " << a[2][3] << endl;
        cout << "      ----+----+----+----" << endl;


        if (pos[12] == 0)
            printf("       \033[1;31m13 \033[0m|");
        else
            cout << "       " << a[3][0] << " |";
        if (pos[13] == 0)
            printf("\033[1;31m 14 \033[0m|");
        else
            cout << " " << a[3][1] << " |";
        if (pos[14] == 0)
            printf("\033[1;31m 15 \033[0m|");
        else
            cout << " " << a[3][2] << " |";
        if (pos[15] == 0)
            printf("\033[1;31m 16 \033[0m\n");
        else
            cout << " " << a[3][3] << endl;

        cout << "\n Выберите расположение для [" << arr[i] << "]" << endl;
        cin >> num;
        system("cls");
        if (pos[num - 1] == 0)
        {
            swap(arr[i], pos[num - 1]);
        }
        else
            i--;

        for (int y = 0; y < 4; y++)
        {
            for (int x = 0; x < 4; x++)
            {
                ar[y][x] = pos[v];
                v++;
            }
        }

        for (int y = 0; y < 4; y++)
        {
            for (int x = 0; x < 4; x++)
            {
                if (ar[y][x] == 1)
                    a[y][x] = " 1";
                else if (ar[y][x] == 2)
                    a[y][x] = " 2";
                else if (ar[y][x] == 3)
                    a[y][x] = " 3"; 
                else if (ar[y][x] == 4)
                    a[y][x] = " 4";
                else if (ar[y][x] == 5)
                    a[y][x] = " 5";
                else if (ar[y][x] == 6)
                    a[y][x] = " 6";
                else if (ar[y][x] == 7)
                    a[y][x] = " 7";
                else if (ar[y][x] == 8)
                    a[y][x] = " 8";
                else if (ar[y][x] == 9)
                    a[y][x] = " 9";
                else if (ar[y][x] == 10)
                    a[y][x] = "10";
                else if (ar[y][x] == 11)
                    a[y][x] = "11";
                else if (ar[y][x] == 12)
                    a[y][x] = "12";
                else if (ar[y][x] == 13)
                    a[y][x] = "13";
                else if (ar[y][x] == 14)
                    a[y][x] = "14";
                else if (ar[y][x] == 15)
                    a[y][x] = "15";
                else if (ar[y][x] == 0)
                    a[y][x] = "  ";
            }
        }
    }
    
}


void stationingBF(string a[4][4], int ar[4][4])
{
    string arr[15]{ " 1", " 2", " 3", " 4", " 5", " 6", " 7"," 8"," 9","10","11","12","13","14","15" };
    string pos[16]{ "  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  ","  " };

    for (int i = 0; i < 15; i++)
    {
        int num, v = 0;
        num = rand() % 16;
        system("cls");
        if (pos[num] == "  ")
        {
            swap(arr[i], pos[num]);
        }
        else
            i--;

        for (int y = 0; y < 4; y++)
        {
            for (int x = 0; x < 4; x++)
            {
                a[y][x] = pos[v];
                v++;
            }
        }


    }
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            if (a[y][x] == " 1")
                ar[y][x] = 1;
            else if (a[y][x] == " 2")
                ar[y][x] = 2;
            else if (a[y][x] == " 3")
                ar[y][x] = 3;
            else if (a[y][x] == " 4")
                ar[y][x] = 4;
            else if (a[y][x] == " 5")
                ar[y][x] = 5;
            else if (a[y][x] == " 6")
                ar[y][x] = 6;
            else if (a[y][x] == " 7")
                ar[y][x] = 7;
            else if (a[y][x] == " 8")
                ar[y][x] = 8;
            else if (a[y][x] == " 9")
                ar[y][x] = 9;
            else if (a[y][x] == "10")
                ar[y][x] = 10;
            else if (a[y][x] == "11")
                ar[y][x] = 11;
            else if (a[y][x] == "12")
                ar[y][x] = 12;
            else if (a[y][x] == "13")
                ar[y][x] = 13;
            else if (a[y][x] == "14")
                ar[y][x] = 14;
            else if (a[y][x] == "15")
                ar[y][x] = 15;
            else if (a[y][x] == "  ")
                ar[y][x] = 0;
        }
    }
}