/* Zadania:
           1) Napisz program, dwie liczby - podstawa, wyk�adnik
           2) Obliczanie silni na podstawie wyk�adnika n (n!)
           3) n - wysoko��, kolumny
           4) wiersze, kolumny
           5) 3 - wypisuje liczby
           6) od zera do x co 3 liczby
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    int w,k,i,i2;
    cout << "Podaj ilo�� wierszy: ";
    cin >> w;
    cout << "Podaj ilo�� kolumn: ";
    cin >> k;
    
    for (i=1; i<=w; i++)
    {
        for (i2=1; i2<=k; i2++)
        {
            cout << "x";
        }
        cout << endl;
    }
    
    cin.ignore();
    getchar();
    return 0;
}
