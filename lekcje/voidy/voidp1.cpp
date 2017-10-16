#include <iostream>
using namespace std;

void wypelnij(int tab[8])
{
     for (int i = 0; i<8; i++)
     {
         cout << "Podaj liczbê (" << i+1 << "): ";
         cin >> tab[i];
     }
}

void wypisz(int tab[8])
{
     for (int i = 0; i<8; i++)
     {
         cout << tab[i] << endl;
     }
}

int main() {
    int tab1[8];
    int tab2[8];
    wypelnij(tab1);
    wypelnij(tab2);
    wypisz(tab1);
    wypisz(tab2);
    
    cin.get();
    cin.get();
    return 0;
}
