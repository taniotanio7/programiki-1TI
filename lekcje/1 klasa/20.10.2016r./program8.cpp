#include <iostream>
#include <cstdio>
using namespace std;
int main()
 {
  system("chcp 1250");
  int a,b,c;
  float c2;
  
  cout<<"WprowadŸ liczby:\n";
  cin>>a>>b;
  
  cout<<"Wynik dodawania: "<<a+b<<"\n";

  
  c=a-b;
  cout<<"Wynik odejmowaina: "<<c<<"\n";

  
  c=a*b;
  cout<<"Wynik mno¿enia: "<<c<<"\n";

  
  c2=a/b;
  cout<<"Wynik dzielenia: "<<c2<<"\n";
  
  c=a%b;
  cout<<"Reszta dzielenia ca³kowitego: "<<c;
  
  cin.ignore();
  getchar();
  return 0;
}
