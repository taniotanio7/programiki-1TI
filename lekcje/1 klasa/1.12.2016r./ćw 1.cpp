#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    char znak;
    cout << "Wpisz znak: \n";
    cin >> znak;
    
    while (znak != 'a')
    {
          cout << "B��d, spr�buj jeszcze raz:\n";
          cin >> znak;
          }
    cout << "Ok, zgad�e�!";
    
    cin.ignore();
    getchar();
    return 0;
}
