#include <iostream>
#include <cstdio>
using namespace std;
 int main()
 {
  system ("chcp 1250");
  int wiek;
/*
  int a;
  int b;
  int c;
  =
  int a,b,c;
*/
      cout<<"Podaj sw�j wiek: ";
      cin>>wiek;
      //int wiek; - B��d: zmienne mog� by� gdziekolwiek, ale musz� pojawi� si� przed pierwszym u�yciem
      cout<<"Masz "<<wiek<<" lat(a)";
      cin.ignore();
  getchar();
  return 0;
}
