#include "vision.h"
#include "logic.h"
#include "stationing3x3.h"
#include "stationing4x4.h"

using namespace std;


int main()
{
    setlocale(LC_ALL, "RU");
    srand(time(NULL));
    int choose, choose1;
    cout << "\n\t*** Пятнашки ***" << endl << endl;
    cout << " Выберите режим игры" << endl;
    cout << " 1 - 3х3" << endl;
    cout << " 2 - 4х4" << endl;
    cout << " 0 - выход" << endl;
    cin >> choose1;
    system("cls");
    if (choose1 == 1)
    {
        char a3[3][3];
        cout << "\n\t*** Пятнашки ***" << endl << endl;
        cout << " Выберите режим расстановки" << endl << endl;
        cout << " 1 - ручной" << endl;
        cout << " 0 - автоматический" << endl;
        cin >> choose;
        system("cls");
        if (choose == 1)
            stationing(a3);
        else
            stationingB(a3);
        clock_t t0 = clock();
        vision(a3);
        cout << endl << " Перестановок: " << logic(a3) << endl;
        clock_t t1 = clock();
        cout << " Ваше время: " << (double)(t1 - t0) / CLOCKS_PER_SEC << " сек" << endl;
    }
    else if (choose1 == 2)
    {
        string a4[4][4];
        int aF[4][4];
        cout << "\n\t*** Пятнашки ***" << endl << endl;
        cout << " Выберите режим расстановки"<< endl;
        cout << " 1 - ручной"<< endl;
        cout << " 0 - автоматический"<< endl;
        cin >> choose;
        system("cls");
        if (choose == 1)
            stationingF(a4, aF);
        else
            stationingBF(a4, aF);
        clock_t t0 = clock();
        visionF(a4);
        cout << endl << " Перестановок: " << logicF(a4, aF) << endl;
        clock_t t1 = clock();
        cout << " Ваше время: " << (double)(t1 - t0) / CLOCKS_PER_SEC << " сек" << endl;
    }
    else if (choose1 == 0)
        return 0;
    return 0;
}