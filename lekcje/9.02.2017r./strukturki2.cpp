#include <iostream>
#include <cstdio>
using namespace std;

struct rzeczy
{
       int liczba;
       char litera;
};

struct zdrowie
{
       float waga;
       string imie;
};

struct wpis
{
       double fundusze;
       int rok_zalozenia;
       string nazwa;
};

int main()
{
    system("chcp 1250");
    system("cls");
    
    rzeczy ulubione;
    zdrowie dane_zdrow;
    wpis firma;
    
    cout << "Podaj swoj¹ ulubion¹ cyfrê: ";
    cin >> ulubione.liczba;
    cout << "Podaj ulubion¹ literê: ";
    cin >> ulubione.litera;
    
    cout << "Podaj wagê: ";
    cin >> dane_zdrow.waga;
    cout << "Podaj imie: ";
    cin >> dane_zdrow.imie;
    
    cout << "Podaj nazwe firmy: ";
    cin >> firma.nazwa;
    cout << "Podaj rok za³o¿enia: ";
    cin >> firma.rok_zalozenia;
    cout << "Podaj kapital firmy: ";
    cin >> firma.fundusze;
    
    cout << "\n\nOto zgromadzone informacje:" << endl;
    
    cout << "Cyfra: " << ulubione.liczba << endl;
    cout << "Litera: " << ulubione.litera << endl;
    cout << "Waga: " << dane_zdrow.waga << endl;
    cout << "Imie: " << dane_zdrow.imie << endl;
    cout << "Nazwa firmy: " << firma.nazwa << endl;
    cout << "Rok zalo¿enia: " << firma.rok_zalozenia << endl;
    cout << "Fundusze: " << firma.fundusze << endl;
    
    
    cin.get();
    cin.get();
    
    return 0;
}
