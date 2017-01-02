#include <iostream>
#include <cmath> // Potrzebne do potęgowania

void clearconsole(void); // Prototypy funkcji
void ClrWait(void);

using namespace std;

// Wybór odpowiednich funkcji w oparciu o używany system.

#if _WIN32 // Dla Windowsa

    void clearconsole()
    {
          system("cls");
    }

#else // Dla wszystkiego innego

    #include <unistd.h>

    void clearconsole()
    {
      printf("\033[2J"); // Czyści ekran
      printf("\033[1;1H"); // Ustawia kursor w lewym, górnym rogu
    }

#endif

int main()
{
  int bok, pole;
  bool done = false;

  while(done == false)
  {
    cout << "Podaj bok kwadratu: ";
    cin >> bok;
    if(bok<=0) cout << "\nBłąd! podaj prawidłową wartość!";
    else
    {
      pole = pow(bok,2);
      cout << "\nPole kwadratu: " << pole;
      done = true;
    }
    ClrWait();
    clearconsole();
  }
  return 0;
}

void ClrWait()
{
  cin.clear();
  cin.ignore();
  cin.get();
}
