#include <iostream>
#include <cstdio>
using namespace std;


struct osoba
{
       string imie;
       int wiek;
};

int main()
{
    system("chcp 1250");
    system("cls");
    osoba uczen;
    cout << "Podaj imiê: ";
    cin >> uczen.imie;
    cout << "Podaj wiek: ";
    cin >> uczen.wiek;
    
    cout << "\nWitaj! " << uczen.imie << " masz " << uczen.wiek << " lat." << endl;
    
    cin.get();
    cin.get();
    
    return 0;
}
