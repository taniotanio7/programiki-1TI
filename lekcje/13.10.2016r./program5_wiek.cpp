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
      cout<<"Podaj swój wiek: ";
      cin>>wiek;
      //int wiek; - B³¹d: zmienne mog¹ byæ gdziekolwiek, ale muszê pojawiæ siê przed pierwszym u¿yciem
      cout<<"Masz "<<wiek<<" lat(a)";
      cin.ignore();
  getchar();
  return 0;
}
