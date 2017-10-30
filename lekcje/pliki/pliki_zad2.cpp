#include <fstream>
#include <iostream>

using namespace std;

int main()
{
 cout << "Podaj dwie liczby: ";
 int a,b;
 cin >> a >> b;
 
 ofstream zapis("plik.txt");
 zapis << "Pole prostok¹ta: " << a * b << endl
       << "Obwód prostok¹ta: " << 2 * a + 2 * b << endl;
 zapis.close();
 
 return 0;
}
