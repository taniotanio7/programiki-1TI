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
     int a, b = 0, h, wybor, n, l, r;
     double obj, pole;
  cout<<"Ten program pozwala na obliczenie objętości i pola całkowitego wybranych figur przestrzennych\n\n";
  cout<<"Wybierz bryłę do obliczenia: \n1 - prostopadłościan\n2 - ostrosłup prawidłowy\n3 - stożek\n4 - walec\n5 - kula\n";
     cin>>wybor;

  if (wybor==1) {
      cout<<"Wprowadź długość boku a oraz b: \n";
      cin>>a>>b;
      cout<<"Wprowadź wysokokość (h): ";
      cin>>h;
      obj=a*b*h;
      pole=2*(a*b+a*h+b*h);
      cout<<"\nObjętość wynosi: "<<obj<<"\nPole wynosi: "<<pole;
}
  if (wybor==2) {
      cout<<"Uwaga! Do obliczeń ostrosłup musi być prawidłowy!\n";
      cout<<"Wprowadź długość boku a: ";
      cin>>a;
      cout<<"\nWprowadź wysokokość (h): ";
      cin>>h;
      cout<<"\nWprowadź ilość ścian bocznych ostrosłupa: ";
      cin>>n;
      pole=(n/2)*a*h;
      obj=(1/3)*(a*a)*h;
      cout<<"\nObjętośc wynosi: "<<obj<<"\nPole wynosi: "<<pole;
}
  if (wybor==3) {
      cout<<"Wartość liczby pi w obliczeniach wynosi: 3,14\n";
      cout<<"Wprowadź długość promienia (r): ";
      cin>>r;
      cout<<"\nWprowadź długość tworzącej (l): ";
      cin>>l;
      cout<<"\nWprowadź wysokokość (h): ";
      cin>>h;
      pole=3.14*r*(r+l);
      obj=1/3*3.14*(r*r)*h;
      cout<<"\nObjętośc wynosi: "<<obj<<"\nPole wynosi: "<<pole;
     }
  if (wybor==4) {
      cout<<"Wartość liczby pi w obliczeniach wynosi: 3,14\n";
      cout<<"Wprowadź długość promienia (r): ";
      cin>>r;
      cout<<"\nWprowadź wysokokość (h): ";
      cin>>h;
      pole=2*3.14*r*(r+h);
      obj=3.14*(r*r)*h;
      cout<<"\nObjętośc wynosi: "<<obj<<"\nPole wynosi: "<<pole;
     }
  if (wybor==5) {
      cout<<"Wartość liczby pi w obliczeniach wynosi: 3,14\n";
      cout<<"Wprowadź długość promienia (r): ";
      cin>>r;
      pole=4*3.14*(r*r);
      obj=4/3*3.14*(r*r*r);
      cout<<"\nObjętośc wynosi: "<<obj<<"\nPole wynosi: "<<pole;
     }

  cin.ignore();
  getchar();
  return 0;
}

/*Wklejka:
 cout<<"Wprowadź długość boku a oraz b: \n";
 cin>>a>>b;
 cout<<"Wprowadź wysokokość (h): \n";
 cin>>h;
*/
