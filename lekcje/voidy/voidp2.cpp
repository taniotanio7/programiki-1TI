#include <iostream>
using namespace std;

float wylicz(float tablica1[7], float tablica2[7])
{
      float suma = 0;
      for (int i = 0; i<7; i++)
      {
          suma += tablica1[i] + tablica2[i];
      }
      return suma;
}

void wypelnij(float tab[7])
{
     for (int i = 0; i<7; i++)
     {
         cout << "Podaj liczbê (" << i+1 << "): ";
         cin >> tab[i];
     }
}

int main()
{
    float tab1[7];
    float tab2[7];
    wypelnij(tab1);
    wypelnij(tab2);
    
    cout << "Suma = " << wylicz(tab1, tab2);
    
    cin.get();
    cin.get();
    return 0;
}
