//
//  Programy - programowanie
//
//  Created by Jonatan Witoszek on 21.10.2016.
//  Copyright © 2016 Jonatan Witoszek. All rights reserved.
//

/*
Funkcja kwadratowa:
x*x
x^2
*/
#include <iostream>
#include <cstdio>
using namespace std;
int main()
 {
  system("chcp 1250");
  int x, y, wybor;
  
  cout<<"Podaj wartość x: ";
  cin>>x;
  cout<<"\nWybierz, którą funkcję chcesz obliczyć:\n\n1 - y=5x+8\n2 - y=3x^2+2x-2\n\n";
  cin>>wybor;
  
  if (wybor==1) {
   y=(5*x)+8;
}
  if (wybor==2) {
   y=(x*x)*3+(2*x)-2;
}
  
  cout<<"Wartość funkcji y wynosi: "<<y;
  
  cin.ignore();
  getchar();
  return 0;
}
