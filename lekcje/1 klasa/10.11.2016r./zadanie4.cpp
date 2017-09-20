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
    if (a==b&&b==c&&c==a) cout<<"Jedna z podanych liczb jest równa innej";
    else {
         if (a>b and a>c and b<a and b>c and c<a and c<b) cout<<a<<b<<c;
         if (b>a and b>c and a<b and a>c and c<a and c<b) cout<<b<<a<<c;
         if (c>a and c>b and b<c and b>a and a<c and a<b) cout<<c<<b<<a;
         if (b>a and b>c and c<b and c>a and a<c and a<b) cout<<b<<c<<a;
         if (a>b and a>c and c<a and c>b and b<a and b<c) cout<<a<<c<<b;
         if (c>b and c>a and a<c and a>b and b<a and b<c) cout<<c<<a<<b;
}
    cin.ignore();
    getchar();
    return 0;
}
