#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    system("chcp 1250");
    system("cls");
    int a,b,c;
    
    cout<<"Wypisz 3 liczby (a,b,c): "<<endl;
    cin>>a>>b>>c;
    if (a==b&&b==c&&c==a) cout<<"Jedna z podanych liczb jest r�wna innej";
    else {
     if (a<b and a<c) cout<<"Najmniejsz� liczb� jest: "<<a;
     if (b<a and b<c) cout<<"Najmniejsz� liczb� jest: "<<b;
     if (c<a and c<b) cout<<"Najmniejsz� liczb� jest: "<<c;
}
    cin.ignore();
    getchar();
    return 0;
}
