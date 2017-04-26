#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    
    cout << "Jakie zadanko dzisiaj sobie zrobimy?"
         << endl
         << "PDF (1)"
         << endl
         << "Tablica (2)";
    
    cin.get();
    cin.get();
    return 0;
}
