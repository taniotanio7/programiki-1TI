#include <iostream>
#include <fstream>

using namespace std;

int main()
{
 ofstream zapis("nowyplik.txt");
 if (!zapis) // handlowanie b³êdu
 {
    cout << "Nie mog³em otworzyæ takiego pliku!";
    cin.get();
    return 1; // zwracamy b³¹d
 }
 return 0;
}
