#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Podaj 3 liczby: ";
    cin >> a >> b >> c;
    
    ofstream zapis("plik.txt");
    zapis << a << endl
          << b << endl
          << c;
    zapis.close();
    
    return 0;
}
