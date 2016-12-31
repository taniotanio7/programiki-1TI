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
  system("chcp 1250");

  int a,b,c,wybor, r;
  float c2;

  cout<<"Wprowadź liczby:\n";
  cin>>a>>b;

  cout<<"Co chciałbyś zrobić z wprowadzonymi liczbami?\n\n-> 1 - Dzielenie całkowite z resztą\n-> 2 - Dzielenie\n-> 3 - Mnożenie\n-> 4 - Dodawanie\n-> 5 - Odejmowanie\n\n";
  cin>>wybor;

     if (wybor==1) {
      c=a/b;
      r=a%b;
      cout<<"Wynik to: "<<c<<", reszta: "<<r;
     }
     if (wybor==2) {
      c2=a/b;
      cout<<"Wynik to: "<<c2;
     }
     if (wybor==3) {
      c=a*b;
      cout<<"Wynik to: "<<c;
     }
     if (wybor==4 ) {
      c=a+b;
      cout<<"Wynik to: "<<c;
     }
     if (wybor==5) {
         c=a-b;
         cout<<"Wynik to: "<<c;
     }

  cin.ignore();
  getchar();
  return 0;
 }
