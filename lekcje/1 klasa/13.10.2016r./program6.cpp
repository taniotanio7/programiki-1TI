#include <iostream>
#include <cstdio>
using namespace std;
int main()
 {
 string imie, nazwisko;
 int wiek;
 system ("chcp 1250");
 
     cout<<"Podaj swoje imi�: ";
     cin>>imie;
     
     cout<<"Podaj swoje nazwisko: ";
     cin>>nazwisko;
     
     cout<<"Podaj swoj� dat� urodzenia: ";
     cin>>wiek;
     
     cout<<"Witaj "<<imie<<" twoje nazwisko to "<<nazwisko<<". Masz "<<2016-wiek<<" lat,\nMi�ego dnia!";
     
     cin.ignore();
     getchar();
     return 0;
}
