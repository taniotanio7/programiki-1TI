//
//  Programy - programowanie
//
//  Created by Jonatan Witoszek on 21.10.2016.
//  Copyright © 2016 Jonatan Witoszek. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main()
 {
/* 
Inkrementacja - Zwiêkszanie wartoœci zmiennej:
i=i+1;
lub
i++;

Dekrementacja - Zmniejszanie wartoœci zmiennej:
i=i-1;
lub
i--;
*/
  float a,b,c;
  cout<<"Wpisz liczby:\n";
  cin>>a>>b;
  
  c=a/b;
/*
c=a/b -> 1, liczba ca³kowita (ile razy siê mieœci)
c=a%b -> 3, reszta z dzielenia ca³kowitego

int: / lub % - dzielenie ca³kowite
float: tylko / (nie obs³uguje reszty z dzieleina) - dzielenie z liczbami po przecinku
 */
  cout<<c; //Bez zmiennej pomocniczej: cout<<a/b
  
  cin.ignore();
  getchar();
  return 0;
}
