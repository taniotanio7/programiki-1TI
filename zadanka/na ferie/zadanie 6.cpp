#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int n;
  cout << "Podaj n (wysokość): ";
  cin >> n;

  int dl = 1;
  for (int i = 1; i <= n; i++) // Tworzy nową linijkę (wiersz)
  {
    for (int odst = 1; odst <= n-i; odst++) // Tworzy odstęp tak, żeby kursor był na środku
    {
      cout << " ";
    }
    for (int linia = 1; linia <= dl; linia++) // Wypisuje odpowidnią dl x-ów
    {
      cout << "x";
    }
    cout << endl;
    dl = dl + 2; // Nowa linia ma o 2 znaki więcej niż poprzednia
  }
  cin.ignore();
  cin.ignore();
  return 0;
}
