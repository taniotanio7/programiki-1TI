#include <iostream>

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

int main(void)
{
  
}

void ClrWait()
{
  cin.clear();
  cin.ignore();
  cin.get();
}
