#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() 
{
    system("chcp 1250");
    system("cls");
    int a;
    
    cout<<"WprowadŸ liczbê: ";
    cin>>a;
    
    if ((a>=11 and a<=23) or (a>=46 and a<=58) or (a>=72 and a<=97)) cout << "Liczba znajduje siê w zakresie.";
    else cout<<"Liczba jest poza zakresem";
    
    cin.ignore();
    getchar();
    return 0;
}
