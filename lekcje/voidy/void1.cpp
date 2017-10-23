#include <iostream>
using namespace std;

void wypelnij(int tab[3][4])
{
      for (int i = 0; i<3; i++)
      {
          for (int i2 = 0; i2 < 4; i2++)
          {
           cout << "Podaj liczbę [" << i << "][" << i2 << "] = ";
           cin >> tab[i][i2];
          }
      }
}

void wyswietl(int tab[3][4])
{
      for (int i = 0; i<4; i++)
      {
          for (int i2 = 0; i2 < 3; i2++)
          {
           cout << "\nTab [" << i2 << "][" << i << "] = "
                << tab[i2][i];
          }
          cout << "\n---------------------";
      }
}

int main() {
 int tablica[3][4];
 wypelnij(tablica);
 wyswietl(tablica);
 
 cin.get();
 cin.get();
 return 0;   
}
