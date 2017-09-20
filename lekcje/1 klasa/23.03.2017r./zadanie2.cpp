#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    
    srand(time(NULL));
    bool done = false;
    int liczba = (rand() % 5);
    int proby = 0;
    
    while (done == false)
    {
        proby++;
        
        cout << liczba << endl;
        
        int temp;
        cout << "Odgadnij liczbê! ";
        cin >> temp;
        
        if (temp == liczba)
        {
           cout << "Bravo! Odgad³eœ!"
                << "\nIloœæ prób: " << proby;
           done = true;
        }
        else
        {
            cout << "Nic z tego! Zgaduj dalej...";
            cin.get();
            cin.get();
            system("cls");
        }
    }
    cin.get();
    cin.get();
    return 0;
}
