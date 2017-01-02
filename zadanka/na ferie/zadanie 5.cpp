#include <iostream>
using namespace std;

int main(void)
{
  cout << "Wprowadź n: ";
  int n;
  cin >> n;
  int wynik = 0;
  for(int i = 1; i <= n; i++)
  {
    wynik = wynik + i;
  }
  cout << "\nWynik: " << wynik;

  cin.ignore();
  cin.ignore();
  return 0;
}
