#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() 
{
    system("chcp 1250");
    system("cls");
    string l;
    
    cout<<"Wpisz liter�: "<<endl;
    cin>>l;
    
    if (l == "a" or l == "e" or l == "y" or l == "o" or l == "i" or l == "�" or l == "�" or l == "u" or l == "�") cout<<"samog�oska";
    else cout<<"sp�g�oska";
    cin.ignore();
    getchar();
    return 0;
}
