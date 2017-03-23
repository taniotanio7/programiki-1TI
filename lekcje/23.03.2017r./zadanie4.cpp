#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    
    int x[10];
    int y[10];
    int wynik[10];
    srand(time(NULL));
    
    cout << "Wylosowane liczby: " << endl;
    for (int i = 0; i<10; i++)
    {
        cout << setw(2);
        x[i] = (rand() % 20);
        cout << x[i] << " ";
    }
    
    cout << endl;
    
    for (int i = 0; i<10; i++)
    {
        cout << setw(2);
        y[i] = (rand() % 20);
        cout << y[i] << " ";
    }
    setw(1);
    cout << "\n\nWyniki: " << endl << endl;
    
    for (int i = 0; i < 10; i++)
    {
        if (x[i] % 2 == 0 && y[i] % 2 == 0)
        {
           wynik[i] = x[i] + y[i];
        }
        else
        {
            wynik[i] = 0;
        }
        
        cout << "wynik[" << i << "] = " << wynik[i] << endl;
    }
    
    cin.get();
    cin.get();
    return 0;
}
