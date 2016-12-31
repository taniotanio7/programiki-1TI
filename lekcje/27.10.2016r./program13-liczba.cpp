#include <iostream>
#include <cstdio>

using namespace std;
int main() {
    system("chcp 1250");
    int liczba;
    cout<<"WprowadŸ liczbê: ";
    cin>>liczba;
    
    if (liczba>9 && liczba<100) cout<<"Liczba jest dwucyfrowa";
    else cout<<"Liczba nie jest dwucyfrowa";
     
    cin.ignore();
    getchar();
    return 0;
}
    
