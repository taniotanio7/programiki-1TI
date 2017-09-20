#include <iostream>
#include <cstdio>
using namespace std;

struct info
{
       union liczba
       {
             int ulubiona;
             float waga;
             double fundusze;
             int rok;
       };
       
       union znak
       {
             char ulubiony;
             char imie[30];
             char nazwa[50];
       };
};

int main()
{
    system("chcp 1250");
    system("cls");
    
    info dane;
    
    cout << "Podaj swoj¹ ulubion¹ cyfrê: ";
    cin >> dane.liczba.ulubiona;
    cout << "Podaj ulubion¹ literê: ";
    cin >> dane.znak.ulubiony;
    
    cout << "Podaj wagê: ";
    cin >> dane.liczba.waga;
    cout << "Podaj imie: ";
    cin >> dane.znak.imie;
    
    cout << "Podaj nazwe firmy: ";
    cin >> dane.znak.nazwa;
    cout << "Podaj rok za³o¿enia: ";
    cin >> dane.liczba.rok;
    cout << "Podaj kapital firmy: ";
    cin >> dane.liczba.fundusze;
    
    cout << "\n\nOto zgromadzone informacje:" << endl;
    
    cout << "Cyfra: " << dane.liczba.ulubiona << endl;
    cout << "Litera: " << dane.znak.ulubiony << endl;
    cout << "Waga: " << dane.liczba.waga << endl;
    cout << "Imie: " << dane.znak.imie << endl;
    cout << "Nazwa firmy: " << dane.znak.nazwa << endl;
    cout << "Rok zalo¿enia: " << dane.liczba.rok << endl;
    cout << "Fundusze: " << dane.liczba.fundusze << endl;
    
    
    cin.get();
    cin.get();
    
    return 0;
}
