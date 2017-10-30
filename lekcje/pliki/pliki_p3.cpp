#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    char nazwa[45];
    cout << "Wpisz nazwê pliku jaki mam utworzyæ: ";
    cin >> nazwa;
    ofstream zapis(nazwa);
    zapis << 'A';
    zapis.close();
    return 0;
}
