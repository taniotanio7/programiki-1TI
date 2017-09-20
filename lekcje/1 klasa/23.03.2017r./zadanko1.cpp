#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    
    int x[10];
    srand(time(NULL));
    
    cout << "Wylosowane liczby: " << endl;
    for (int i = 0; i<10; i++)
    {
        x[i] = ((rand() % 5) + 1);
        cout << "x[" << i << "] = " << x[i] << endl;
    }
    
    int iloczyn = 1;
    for (int i = 0; i<10; i++)
    {
        if (x[i] % 2 != 0)
        {
           iloczyn *= x[i];
        }
    }
    
    cout << "Iloczyn liczb nieparzystych: " << iloczyn << endl;
    
    int suma = 0;
    for (int i = 0; i<10; i++)
    {
        suma += x[i];
    }
    
    double srednia = suma / 10;
    cout << "Liczby wiêksze od œredniej: ";
    
    for (int i = 0; i<10; i++)
    {
        if (x[i] > srednia)
        {
           cout << x[i] << ", ";
        }
    }
    
    cin.get();
    cin.get();
    return 0;
    
}
