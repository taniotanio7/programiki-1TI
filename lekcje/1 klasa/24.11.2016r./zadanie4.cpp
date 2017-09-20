/* Zadania:
           1) Napisz program, dwie liczby - podstawa, wyk³adnik
           2) Obliczanie silni na podstawie wyk³adnika n (n!)
           3) n - wysokoœæ, kolumny
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
    int w,k,i,i2,ilosc,ilosc2;
    cout << "Podaj iloœæ wierszy: ";
    cin >> w;
    cout << "Podaj iloœæ kolumn: ";
    cin >> k;
    for (i=1; i<=w; i++)
    {
        ilosc=1;
        if (i==1 or i==w) {
           for (i2=1; i2<=k; i2++)
           {
           cout << "x";
           }
        }
        else {
             for (i2=1; i2<=k; i2++)
             {
              if (ilosc==1 or ilosc==k) cout << "x";
              else cout << " ";
              ilosc++;
             }
            }
        cout << endl;
    }
    
    cin.ignore();
    getchar();
    return 0;
}
