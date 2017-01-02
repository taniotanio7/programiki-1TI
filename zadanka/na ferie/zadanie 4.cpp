// 4. Wczytujemy liczby do momentu wpisania 0, zero ko�czy wprowadzenie.
// Program wypisuje sum� wszystkich wprowadzonych liczb. Dodatkowo ma by� obliczona suma liczb nie parzystych

#include <iostream>
using namespace std;

int main(void)
{
    int in;
    int wynik1 = 0, wynik2 = 0;
    bool done = false;

    cout << "Wprowadź liczby: ";

    while(done == false)
    {
      cin >> in;
      if(in == 0) done = true;
      else
      {
        wynik1 = wynik1 + in;
        if(in%2 == 1) wynik2 = wynik2 + in;
      }
    }

    cout << "\nSuma wprowadzonych liczb: " << wynik1;
    cout << "\nSuma liczb nieparzystych: " << wynik2;

    cin.ignore();
    cin.ignore();
}
