#include <iostream>
using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    
    int x;
    string oceny [6] = 
    {"niedostateczny", "dopuszczaj¹cy", "dostateczny",
    "dobry", "bardzo dobry", "celuj¹cy"};
    
    cout << "Podaj ocenê (liczba): ";
    cin >> x;
    
    cout << "Podana ocena to: " << oceny[x-1];
    
    cin.get();
    cin.get();
    return 0;
}
