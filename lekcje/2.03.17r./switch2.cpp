/*
0-9 ndst
10-15 dop
16-21 dst
22-26 db
27-31 bdb

(if-y oraz switch case) + program z switch-case na podstawie trójk¹tów

*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    int punkty;
    bool done = false;
    
    while (done == false)
    {
        system("cls");
        cout << "WprowadŸ iloœæ otrzymanych punktów: ";
        cin >> punkty;
        
        switch (punkty)
        {
             case 0 ... 9:
                  cout << "Ocena ndst!";
                  break;
             case 10 ... 15:
                  cout << "Ocena dop!";
                  break;
             case 16 ... 21:
                  cout << "Ocena dst!";
                  break;
             case 22 ... 26:
                  cout << "Ocena db!";
                  break;
             case 27 ... 31:
                  cout << "Ocena bdb!";
                  break;
             default:
                     cout << "Wartoœæ poza zakresem!"; 
                     cin.get();
                     cin.get();
                     continue;   
        }
        cout << endl;
        cout << "Czy chcesz spróbowaæ jeszcze raz? (T/N): ";
        char wybor;
        cin >> wybor;
        switch (wybor)
        {
               case 't':
               case 'T':
                    continue;
               case 'n':
               case 'N':
                    done = true;
                    break;
               default:
                       cout << "B³¹d! WprowadŸ jeszcze raz!";
                       cin >> wybor;
                       break;
        }
    }
    return 0;
}
