#include <iostream>
#include <fstream>

using namespace std;

int main()
{
 ofstream zapis("nowyplik.txt");
 if (!zapis) // handlowanie b��du
 {
    cout << "Nie mog�em otworzy� takiego pliku!";
    cin.get();
    return 1; // zwracamy b��d
 }
 return 0;
}
