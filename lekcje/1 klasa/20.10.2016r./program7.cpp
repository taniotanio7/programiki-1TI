//
//  Programy - programowanie
//
//  Created by Jonatan Witoszek on 21.10.2016.
//  Copyright � 2016 Jonatan Witoszek. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main()
 {
/* 
Inkrementacja - Zwi�kszanie warto�ci zmiennej:
i=i+1;
lub
i++;

Dekrementacja - Zmniejszanie warto�ci zmiennej:
i=i-1;
lub
i--;
*/
  float a,b,c;
  cout<<"Wpisz liczby:\n";
  cin>>a>>b;
  
  c=a/b;
/*
c=a/b -> 1, liczba ca�kowita (ile razy si� mie�ci)
c=a%b -> 3, reszta z dzielenia ca�kowitego

int: / lub % - dzielenie ca�kowite
float: tylko / (nie obs�uguje reszty z dzieleina) - dzielenie z liczbami po przecinku
 */
  cout<<c; //Bez zmiennej pomocniczej: cout<<a/b
  
  cin.ignore();
  getchar();
  return 0;
}
