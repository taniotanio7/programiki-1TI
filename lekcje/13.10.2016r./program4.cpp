#include <iostream>
#include <cstdio>
using namespace std;
 int main()
 {
  system ("chcp 1250");
  string imie; // string -> deklaracja typu danych; imiê -> nazwa zmiennej
/*
  Np.
  char x;
  int z;
  
  B³êdne deklaracje:
  int 7pxa (nie mo¿e byæ liczby na pocz¹tku) -> int a7pxa
  int program jeden (nie mo¿e byæ spacji) -> int program_jeden
  int !abc (nie mo¿e byæ znaków specjalnych) -> int abc
  int œwiat (nie mo¿e byæ polskich znaków) -> int swiat
*/
      cout<<"Jak masz na imiê?";
      cin>>imie;
      cout<<"Witaj "<<imie;
      cin.ignore();
  getchar();
  return 0;
}
