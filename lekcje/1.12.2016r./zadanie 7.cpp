/* Zadania:
           7. Wypisuje sum� liczb od 1 do n tylko wtedy kiedy liczba jest parzysta (podzielna przez 2)
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    int n, i=1, wynik=0;
    cout << "Podaj liczbę n: ";
    cin >> n;

    while (i<=n)
    {
          if (i%2 == 0)
          {
            wynik=wynik+i;
            if (i == n) cout << i;
            else cout << i << "+";
          }
    i++;
}

    cout << " = " << wynik;

    cin.ignore();
    getchar();
    return 0;
}
