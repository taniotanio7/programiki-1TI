#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    
    int low, high;
    
    cout << "Losowanie liczb: (rand() % x) + y"
         << endl;
    cout << "x = ";
    cin >> low;
    
    cout << "y = ";
    cin >> high;
    
    srand(time(NULL));
    int tab[6][6];
    
    // Generator los. liczb
    for (int i = 0; i<6; i++) // Wiersze
    {
        for (int i2 = 0; i2<6; i2++) // Kolumny
        {
            tab[i][i2] = (rand() % high) + low;
        }
    }
    
    cout << "Wylosowane liczby: " << endl;
    
    // Wypisywanie tablicy
    for (int i = 0; i<6; i++) // Wiersze
    {
        for (int i2 = 0; i2<6; i2++) // Kolumny
        {
            cout << tab[i][i2] << " ";
        }
        cout << endl;
    }
    
    int temp[6][6];
    // Zamieniarka wierszy na kolumny
    for (int i = 0; i<6; i++) // Wiersze
    {
        for (int i2 = 0; i2<6; i2++) // Kolumny
        {
            temp[i2][i] = tab[i][i2];
        }
    }
    
    cout << endl << endl << "Kolejna tablica: " << endl;
    
    // Wypisywanie tablicy
    for (int i = 0; i<6; i++) // Wiersze
    {
        for (int i2 = 0; i2<6; i2++) // Kolumny
        {
            cout << temp[i][i2] << " ";
        }
        cout << endl;
    }
    
    cin.get();
    cin.get();
    return 0;
}
