#include <iostream>
using namespace std;

int main(void)
{
  cout << "Podaj n (wysokość): ";
  int n;
  cin >> n;

  for (int wiersz = n; wiersz > 0; wiersz--) // Wypisuje linijkę (wiersz)
  {
    int kolejn = 1;
    for (int kolumna = wiersz; kolumna > 0; kolumna--) // Wypisuje cyfry w wierszu
    {
      cout << kolejn << " ";
      kolejn++;
    }
    cout << endl;
  }
  cin.ignore();
  cin.ignore();
  return 0;
}
