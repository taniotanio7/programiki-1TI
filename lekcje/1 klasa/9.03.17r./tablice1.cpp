#include <iostream>
using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    
    int x;
    string oceny [6] = 
    {"niedostateczny", "dopuszczaj�cy", "dostateczny",
    "dobry", "bardzo dobry", "celuj�cy"};
    
    cout << "Podaj ocen� (liczba): ";
    cin >> x;
    
    cout << "Podana ocena to: " << oceny[x-1];
    
    cin.get();
    cin.get();
    return 0;
}
