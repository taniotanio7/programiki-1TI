#include <iostream>
#include <fstream>

using namespace std;

int main()
{
 int a = 12;
 float b = 6.5;
 
 ofstream zapis("H:\\plik1.txt");
 zapis << a << endl << b;
 zapis.close();
 
 zapis.open("H:\\plik1.txt"); // ponowne otwarcie czyœci plik!
 zapis.close();
 
 zapis.open("H:\\plik2.txt");
 zapis << endl << endl << a * b;
 zapis.close();
 
 return 0;
}
