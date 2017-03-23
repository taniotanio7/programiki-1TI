#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    
    int x[5];
    int temp[5];
    srand(time(NULL));
    
    cout << "Wylosowane liczby: " << endl;
    for (int i = 0; i<5; i++)
    {
        x[i] = (rand() % 5);
        cout << "x[" << i << "] = " << x[i] << endl;
    }
    
    bool done = false;
    while (done == false)
    {
        cout << "Podaj 5 liczb: ";
        for (int i = 0; i<5; i++)
        {
            cin >> temp[i];
        }
        
        int odg = 0;
        cout << "Odgad³eœ nastêpuj¹ce liczby: ";
        for (int i = 0; i<5; i++)
        {
            if (x[i] == temp[i])
            {
               cout << x[i] << ", ";
               odg++;
            }
        }
        
        if (odg >= 3)
        {
           cout << "\nZadanie wykonane!";
           done = true;
        }
        else
        {
            cout << "\nSorki maj frend... próbuj jeszcze raz!";
        }
        
        cin.get();
        cin.get();
        system("cls");
    }
    return 0;
}
