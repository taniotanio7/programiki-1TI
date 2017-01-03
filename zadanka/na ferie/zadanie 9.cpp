#include <iostream>
#include <iomanip>

using namespace std;
void TriangleA(int, int); // Prototypy funkcji
void TriangleB(int, int);
void TriangleC(int, int);
void TriangleD(int, int);
void cls(void);

// Wybór odpowiednich funkcji w oparciu o używany system.

#if _WIN32 // Dla Windowsa

    void cls()
    {
          system("cls");
    }

#else // Dla wszystkiego innego

    #include <unistd.h>

    void cls()
    {
      printf("\033[2J"); // Czyści ekran
      printf("\033[1;1H"); // Ustawia kursor w lewym, górnym rogu
    }

#endif

int main(void)
{
  int n, face, rote, margain;
  bool done = false;
  char answ;
  while (done == false)
  {
    cout << "Podaj wielkość trójkąta: ";
    cin >> n;
    cout << "Podaj margines (domyślnie 0): ";
    cin >> margain;
    cout << "\nWybierz obrót:\n1) lewo\n2) prawo\n   ___\b\b";
    cin >> face;
    cout << "\n\nWybierz obrót:\n1) dół\n2) góra\n   ___\b\b";
    cin >> rote;

    cout << endl << endl;

    if(face == 1 and rote == 2) TriangleA(n, margain); // Przypadek 1: w lewo, w górę
    if(face == 2 and rote == 2) TriangleB(n, margain); // Przypadek 2: w prawo, w górę
    if(face == 1 and rote == 1) TriangleC(n, margain); // Przypadek 3: w lewo, w dół
    if(face == 2 and rote == 1) TriangleD(n, margain); // Przypadek 4: w prawo, w dół

    cout << "\n\nCzy chcesz zakończyć? (T/N): ";
    cin >> answ;
    if(answ == 'T' or answ == 't') done = true;
    if(answ == 'N' or answ == 'n') cls();
  }
  cin.ignore();
  return 0;
}

void TriangleA(int n, int marg) // Przypadek 1
{
  for (int wiersz = 1; wiersz <= n; wiersz++) // Nowa linia
  {
    cout << setw(marg);
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

void TriangleB(int n, int marg) // Przypadek 2
{
  for (int wiersz = 1; wiersz <= n; wiersz++) // Nowa linia
  {
    cout << setw(marg);
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

void TriangleC(int n, int marg) // Przypadek 3: w lewo, w dół
{
  for (int wiersz = n; wiersz > 0; wiersz--) // Nowa linia
  {
    cout << setw(marg);
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

void TriangleD(int n, int marg) // Przypadek 4: w prawo, w dół
{
  int count = 1;
  for (int wiersz = n; wiersz > 0; wiersz--)
  {
    cout << setw(marg);
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
