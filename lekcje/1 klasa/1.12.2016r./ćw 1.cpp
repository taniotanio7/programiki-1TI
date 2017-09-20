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
          cout << "B³¹d, spróbuj jeszcze raz:\n";
          cin >> znak;
          }
    cout << "Ok, zgad³eœ!";
    
    cin.ignore();
    getchar();
    return 0;
}
