// Ok, to już będzie nieco trudniejsze :/
// TODO: Do ogarnięcia budowanie trójkąta w dół

#include <iostream>
using namespace std;

void TriangleA(int);
void TriangleB(int);

int main(void)
{
  int n, face, rote;
  cout << "Podaj wielkość trójkąta: ";
  cin >> n;
  cout << "\nWybierz obrót:\n1) lewo\n2) prawo";
  cin >> face;
  cout << "\n\nWybierz obrót:\n1) dół\n2) góra";
  cin >> rote;

  if(face == 1 and rote == 1) TriangleA(n); // Przypadek 1: w lewo, w dół
  if(face == 2 and rote == 1) TriangleB(n); // Przypadek 2: w prawo, w dół

}

void TriangleA(int n) // Przypadek 1
{
  for (int wiersz = 1; wiersz <= n; wiersz++) // Nowa linia
  {
    if (wiersz < n)
    {
      for (int odst = 1; odst <= n-wiersz; odst++) // Odstęp
      {
        cout << " ";
      }
      for (int linia = 1; linia <= wiersz; linia++)
      {
        if(linia == 1) cout << "x";
        if(linia == wiersz) cout << "x";
        else cout << " ";
      }
    }
    if (wiersz == n)
    {
      for (int linia = 1; linia <= wiersz + 1; linia++)
      {
        cout << "x";
      }
    }
    cout << endl;
  }
}

void TriangleB(int n) // Przypadek 2
{
  for (int wiersz = 1; wiersz <= n; wiersz++) // Nowa linia
  {
    if (wiersz < n)
    {
      for (int linia = 1; linia <= wiersz; linia++)
      {
        if(linia == 1) cout << "x";
        if(linia == wiersz and wiersz != 1) cout << "x";
        else cout << " ";
      }
    }
    if (wiersz == n)
    {
      for (int linia = 1; linia <= wiersz + 1; linia++)
      {
        cout << "x";
      }
    }
    cout << endl;
  }
}
