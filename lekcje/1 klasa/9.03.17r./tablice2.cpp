#include <iostream>
using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    
    float tab[3];
    
    cout << "Podaj 3 liczby: " << endl;
    cin >> tab[0] >> tab[1] >> tab[2];
    
    cout << "\nWynik: " << (tab[0] + tab[1] + tab[2]) / 3;
    
    cin.get();
    cin.get();
    return 0;
}
