#include <iostream>
#include <cstdio>

using namespace std;
int main() {
    system("chcp 1250");
    int liczba;
    cout<<"\nWpisz liczbê: ";
    cin>>liczba;
    
    if (liczba>0) cout<<"Liczba jest dodatnia";
    if (liczba==0) cout<<"Liczba jest zerem";
    if (liczba<0) cout<<"Liczba jest ujemna";
     
    cin.ignore();
    getchar();
    return 0;
}
    
