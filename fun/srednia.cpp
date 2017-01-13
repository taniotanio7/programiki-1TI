#include <iostream>
using namespace std;

void cls(void);
void wait(void);

#if _WIN32 // Dla Windowsa

    void cls(void)
    {
          system("cls");
    }

#else // Dla wszystkiego innego

    #include <unistd.h>

    void cls(void)
    {
      printf("\033[2J"); // Czyści ekran
      printf("\033[1;1H"); // Ustawia kursor w lewym, górnym rogu
    }

#endif

int main()
{
  cout << "Podawaj liczby z średnią z danego przedmiotu,\na jak Ci się znudzi to wpis 0:\n";
  bool done = false;
  float wynik = 0;
  int i = 0;
  while (done == false)
  {
    float read = 0;
    cin >> read;
    if (read == 0) done = true;
    if (read > 0 and read <= 6)
    {
      wynik += read;
      i++;
    }
    if (read > 6 and read < 0)
    {
      cout << "Podałeś niepoprawną średnią! Spróbuj jeszcze raz";
      wait();
      cls();
      cout << "Podawaj liczby z średnią z danego przedmiotu,\na jak Ci się znudzi to wpis 0: ";
    }
  }

  float srednia = wynik / i;
  cout << "\nTwój wynik to: " << srednia;

  cin.ignore();
  cin.ignore();
  return 0;
}

void wait(void)
{
  cin.clear();
  cin.ignore();
  cin.get();
}
