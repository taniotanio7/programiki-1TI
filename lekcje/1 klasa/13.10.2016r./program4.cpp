#include <iostream>
#include <cstdio>
using namespace std;
 int main()
 {
  system ("chcp 1250");
  string imie; // string -> deklaracja typu danych; imi� -> nazwa zmiennej
/*
  Np.
  char x;
  int z;
  
  B��dne deklaracje:
  int 7pxa (nie mo�e by� liczby na pocz�tku) -> int a7pxa
  int program jeden (nie mo�e by� spacji) -> int program_jeden
  int !abc (nie mo�e by� znak�w specjalnych) -> int abc
  int �wiat (nie mo�e by� polskich znak�w) -> int swiat
*/
      cout<<"Jak masz na imi�?";
      cin>>imie;
      cout<<"Witaj "<<imie;
      cin.ignore();
  getchar();
  return 0;
}
