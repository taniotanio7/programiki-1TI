#include <iostream>
using namespace std;

void wypisz(char x)
{
     for (int i = 0; i<10; i++) {
         cout << x << endl;
         }
}

int main()
{
    // Lepiej nie nazywaæ zmienne tak samo jak w funkcji jak i w funkcji g³ównej.
    // Void - typ pusty
    
    char y;
    cout << "Wpisz znak: ";
    cin >> y;
    wypisz(y);
    
    cin.get();
    cin.get();
    
    return 0;
}
