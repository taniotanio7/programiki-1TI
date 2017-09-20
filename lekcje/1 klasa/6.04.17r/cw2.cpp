#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    
    int n;
    bool done = false;
    while (done == false)
    {
        cout << "Ile chcesz wprowadziæ liczb? (<= 10) ";
        cin >> n;
        
        if (n > 10)
        {
           cout << "Nie, nie, nie... nie³adnie! Jeszcze raz.";
           cin.get();
           cin.get();
           system("cls");
        }
        
        else
        {
            done = true;
        }
    }
    
    double tab[10];
    cout << "Podawaj liczby :> (tylko nie za du¿e bo siê nie zmiesz¹)" << endl;
    for (int i = 0; i<n; i++)
    {
        //tab[i] = cin.get();
        cin >> tab[i];
    }
    
    cout << "\nDziêkujê serdecznie! A teraz poka¿ê Ci kwadraciki i szeœciany od podanych liczb:"
         << endl;
    
    for (int i = 0; i<3; i++) // wiersz
    {
        for (int i2 = 0; i2 < n; i2++) // kolumna
        {
            cout << setw(55);
            if (i == 0)
               cout << tab[i2];
            if (i > 0)
               cout << pow(tab[i2],(double)i+1);
        }
        cout << endl;
    }
    
    cin.get();
    cin.get();
    return 0;
}
