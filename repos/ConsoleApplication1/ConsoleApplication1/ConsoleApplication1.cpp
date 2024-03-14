#include <iostream>
#include <Windows.h>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    const int size = 10;
    int a[size];
    int* pA = a;
    for (int i = 0; i < size; i++)
        a[i] = rand() % 10;
    for (int i = size; i < -1; i--)
    {
        if (*pA[i])
        {

        }
        cout << pA[i]
    }



    return 0;
}

   /*vector<int> vector;
   int n = 0;

   while (true)
   {
       int v = rand() % 100;
       n = rand() % 100;
       if (n % 2 == 0)
       {
           vector.push_back(v);
       }
       else
       {
           if (!vector.empty())
           {
               vector.pop_back();
           }
       }
       for (int i = 0; i < vector.size(); i++)
       {
           cout << vector[i] << " ";
       }
       Sleep(500);
       system("cls");
   }*/

/*srand(time(NULL));
int n = 0;
stack <int> stack;
while (true)
{
    n = rand() % 100;
    if (n % 2 == 0)
    {
        stack.push(n);
    }
    else
    {
        if (!stack.empty())
        {
            stack.pop();
        }
    }
    for (int i = 0; i < stack.size(); i++)
    {
        cout << "*";
    }
    Sleep(500);
    system("cls");
}*/