#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() 
{
    system("chcp 1250");
    system("cls");
    int a,b,c;
    
    cout<<"Wpisz d�ugo�ci przyprostok�tnych: \n";
    cin>>a>>b;
    cout<<"Wpisz d�ugo�ci przeciwprostok�tnej: \n";
    cin>>c;
    
    if ((a*a)+(b*b)==c*c) cout<<"Mo�na zbudowa� taki tr�jk�t";
    else cout<<"Nie mo�na zbudowa� takiego tr�jk�ta";
    cin.ignore();
    getchar();
    return 0;
}
