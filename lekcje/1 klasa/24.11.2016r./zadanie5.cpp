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
    int n,i,ilosc,i2,liczba;
    cout << "Podaj wysokoœæ (n): ";
    cin >> n;
    
    for ( i=1; i<=n; i++)
    {
        liczba=1;
        for ( i2=1; i2<=i; i2++)
        {
            cout << liczba << " ";
            liczba++;
            }
        cout << "\n";
}
    
    cin.ignore();
    getchar();
    return 0;
}
