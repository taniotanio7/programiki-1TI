#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    system("chcp 1250");
    system("cls");
    int a,b,c;
    
    cout<<"Wypisz 3 liczby (a,b,c): ";
    cin>>a>>b>>c;
    if (a==b&&b==c&&c==a) cout<<"Jedna z podanych liczb jest r�wna innej";
    else {
     if (a>b and a>c) cout<<"Najwi�ksz� liczb� jest: "<<a;
     if (b>a and b>c) cout<<"Najwi�ksza liczb� jest: "<<b;
     if (c>a and c>b) cout<<"Najwi�ksza liczb� jest: "<<c;
}
    cin.ignore();
    getchar();
    return 0;
}
