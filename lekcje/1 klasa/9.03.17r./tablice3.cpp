#include <iostream>
using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    
    double liczby[6];
    
    cout << "Podaj liczb� x, a nast�pnie y: " << endl;
    cin >> liczby[0] >> liczby[1];
    
    liczby[2] = liczby[0] + liczby[1];
    liczby[3] = liczby[0] - liczby[1];
    liczby[4] = liczby[0] * liczby[1];
    liczby[5] = liczby[0] / liczby[1];
    
    cout << endl;
    
    cout << "x + y = " << liczby[2] << endl
         << "x - y = " << liczby[3] << endl
         << "x * y = " << liczby[4] << endl
         << "x / y = " << liczby[5] << endl;
         
    cin.get();
    cin.get();
    return 0;
}
