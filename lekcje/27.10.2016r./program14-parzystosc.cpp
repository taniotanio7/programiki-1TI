#include <iostream>
#include <cstdio>

using namespace std;
int main() {
    system("chcp 1250");
    int liczba;
    cout<<"WprowadŸ liczbê: ";
    cin>>liczba;
    
    if (liczba%2==0) cout<<"Liczba jest parzysta";
    else cout<<"Liczba jest nieprzysta";
     
    cin.ignore();
    getchar();
    return 0;
}
