#include <iostream>
#include <string>
using namespace std;

void TriangleA(int); // Prototypy funkcji
void TriangleB(int);
void TriangleC(int);
void TriangleD(int);

int main(void)
{
  int n, face, rote;
  cout << "Podaj wielkość trójkąta: ";
  cin >> n;
  cout << "\nWybierz obrót:\n1) lewo\n2) prawo\n   _\b";
  cin >> face;
  cout << "\n\nWybierz obrót:\n1) dół\n2) góra\n   _\b";
  cin >> rote;

  if(face == 1 and rote == 2) TriangleA(n); // Przypadek 1: w lewo, w górę
  if(face == 2 and rote == 2) TriangleB(n); // Przypadek 2: w prawo, w górę
  if(face == 1 and rote == 1) TriangleC(n); // Przypadek 3: w lewo, w dół
  if(face == 2 and rote == 1) TriangleD(n); // Przypadek 4: w prawo, w dół

}

void TriangleA(int n) // Przypadek 1
{
  for (int wiersz = 1; wiersz <= n; wiersz++) // Nowa linia
  {
    if (wiersz < n)
    {
      for (int odst = 1; odst <= n-wiersz; odst++) // Robi odstęp
      {
        cout << " ";
      }
      for (int linia = 1; linia <= wiersz; linia++) // Robi całą resztę
      {
        if(linia == 1) cout << "x"; // Wypisuje x dla pierwszego znaku w linii
        if(linia == wiersz) cout << "x"; // ... i ostatniego
        else cout << " "; // dla całej reszty "spacja"
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

void TriangleC(int n) // Przypadek 3: w lewo, w dół
{
  for (int wiersz = n; wiersz > 0; wiersz--) // Nowa linia
  {
    if (wiersz == n)
    {
      for (int linia = 1; linia <= n; linia++)
      {
        cout << "x";
      }
    }
    if (wiersz < n)
    {
      for (int linia = 1; linia <= wiersz; linia++)
      {
        if (linia == 1 or linia == wiersz) cout << "x";
        else cout << " ";
      }
    }
    cout << endl;
  }
}

void TriangleD(int n) // Przypadek 4: w prawo, w dół
{
  int count = 1;
  for (int wiersz = n; wiersz > 0; wiersz--)
  {
    if (wiersz == n)
    {
      for (int linia = 1; linia <= wiersz; linia++) // Rysuje długą linię na początku trójkąta
      {
        cout << "x";
      }
    }
    if (wiersz < n)
    {
      for (int odst = 1; odst <= n-wiersz; odst++) // Robi odstęp żeby zacząć w dobrym miejscu
      {
        cout << " ";
      }
      for (int linia = 1; linia <= wiersz; linia++) // Robi całą resztę
      {
        if(linia == 1 or linia == wiersz) cout << "x";
        else cout << " ";
      }
    }
    count += 1;
    cout << endl;
  }
}
