#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() 
{
    system("chcp 1250");
    system("cls");
    int a,b,c;
    
    cout<<"Wpisz d³ugoœci przyprostok¹tnych: \n";
    cin>>a>>b;
    cout<<"Wpisz d³ugoœci przeciwprostok¹tnej: \n";
    cin>>c;
    
    if ((a*a)+(b*b)==c*c) cout<<"Mo¿na zbudowaæ taki trójk¹t";
    else cout<<"Nie mo¿na zbudowaæ takiego trójk¹ta";
    cin.ignore();
    getchar();
    return 0;
}
