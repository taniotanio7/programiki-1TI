#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() 
{
    system("chcp 1250");
    system("cls");
    string l;
    
    cout<<"Wpisz literê: "<<endl;
    cin>>l;
    
    if (l == "a" or l == "e" or l == "y" or l == "o" or l == "i" or l == "¹" or l == "ê" or l == "u" or l == "ó") cout<<"samog³oska";
    else cout<<"spó³g³oska";
    cin.ignore();
    getchar();
    return 0;
}
