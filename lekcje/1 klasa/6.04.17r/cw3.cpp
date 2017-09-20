#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    
    int wier, kol;
    bool done = false;
    while (done == false)
    {
        cout << "Podaj iloœæ wierszy: ";
        cin >> wier;
        
        cout << "Podja iloœæ kolumn: ";
        cin >> kol;
        
        if (wier >= 1000 or kol >= 1000)
        {
           char temp;
           cout << "Czy jesteœ pewien, ¿e chcesz aktywowaæ tryb matriksa? :> (T/N): ";
           cin >> temp;
           if (temp == 't' or temp == 'T')
              done = true;
           else
           {
               cout << "OKEJ MAJ FREND!";
               cin.get();
               cin.get();
               system("cls");
           }
        }
    }
    
    
    int w;
    if (wier or kol > 10) w = 5;
    else w = 3;
    
    for (int i = 1; i <= wier; i++) // wiersze
    {
        for (int i2 = 1; i2 <= kol; i2++) // kolumny
        {
            cout << setw(w);
            cout << i*i2;
        }
        cout << endl;
    }
    
    cin.get();
    cin.get();
    
    return 0;
}
