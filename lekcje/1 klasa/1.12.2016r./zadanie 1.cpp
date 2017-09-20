/* Zadania:
           1. Napisz program, kt�ry zapyta o podanie has�a do programu (info za kt�rym razem zosta�o odgadni�te).
           2. Wypisze 50 liczb, (whie/do while)
           3. Od 100 do 5 w p�tli for
           4. Program, zapyta od podanie dw�ch liczb: w - wiersze, k - kolumny (ew. znak), prostok�t pusty w �rodku z jedn� przek�tn�
           5. Pytamy o podanie n (ilo�ci wierszy), po czym wypisuje piramid�
           1
           24
           369
           481216
           6. Kolejne pot�gi liczby 2 do 10
           7. Wypisuje sum� liczb od 1 do n tylko wtedy kiedy liczba jest parzysta (podzielna przez 2)
*/

#include <iostream>
#include <cstdio>

#if _WIN32

    void cls()
    {
          system("cls");
    }

#else

    #include <unistd.h>

    void cls()
    {
      printf("\033[2J"); // Czyści ekran
      printf("\033[1;1H"); // Ustawia kursor w lewym, górnym rogu
    }

#endif

using namespace std;

void charwait(){
  cin.ignore();
  cin.get();
}

int main()
{
    system("chcp 1250");
    system("cls");
    string haslo;
    int bledy;

    do
    {
      cout << "Podaj hasło: ";
      cin >> haslo;
      if(haslo!="***")
      {
        cout << "Błąd! Spróbuj jeszcze raz...";
        bledy++;
        charwait();
        cls();
      }
    } while(haslo!="***");

    cout << "Brawo miszczu hackingu! Odgadłeś moje super tajne hasło!" << endl;
    cout << "Ilość prób: " << bledy;

    cin.get();
    getchar();
    return 0;
}
