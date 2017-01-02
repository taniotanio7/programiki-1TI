#include <iostream>
using namespace std;

int main()
{
  int n, potega = 0;
  cout << "Podaj n (wysokość): ";
  cin >> n;

  for (int wiersz = 1; wiersz <= n; wiersz++) // Wypisuje nową linijkę (wiersz)
  {
    potega = wiersz - 1; // Decyduje przez ile przemnożyć liczbę, resetuje przy nowym wierszu
    for (int kolumna = 1; kolumna <= wiersz; kolumna ++) // Wypisuje liczby w linicje (kolumny)
    {
      cout << 3 * potega << " ";
      potega++; // podnosi mnożnik dla nast. liczb
    }
    cout << endl;
  }
  cin.ignore();
  cin.ignore();
  return 0;
}
