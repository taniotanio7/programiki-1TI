#include <iostream>

using namespace std;

int main(void)
{
  cout << "Podaj ilość wierszy: ";
  int wiersze;
  cin >> wiersze;
  cout << "Podaj ilość kolumn: ";
  int kolumny;
  cin >> kolumny;

  for(int i = 1; i <= wiersze; i++)
  {
    for(int i2 = 1; i2 <= kolumny; i2++)
    {
      cout.width(3);
      cout << i * i2 << " ";
    }
    cout << endl;
  }
  cin.ignore();
  cin.ignore();
  return 0;
}
