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
    int n,i,ilosc;
    cout << "Podaj liczb� (n): ";
    cin >> n;
    
    ilosc=0;
    for ( i=1; i<=n; i++)
    {
        cout << ilosc*3 <<", ";
        ilosc++;
}
    
    cin.ignore();
    getchar();
    return 0;
}
