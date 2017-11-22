#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

void cls() {
     system("cls");
}

void program1()
{
     ofstream plik("plik.txt");
     cout << "Podaj trzy liczby:" << endl;
     
     int a,b,c;
     cin >> a >> b >> c;
     
     plik << a+b+c;
     plik.close();
}
void program2()
{
     cout << "Wpisz liczby, 0  koñczy wpisywanie" << endl;
     
     ofstream plik("plik.txt");
     bool done = false;
     
     while (!done)
     {
           int a;
           cin >> a;
           
           if (a == 0)
           {
                 done = true;
                 break;
           }
           else
           {
               plik << a << endl;
           }
     }
     plik.close();
}
void program3()
{
     cout << "Wpisz liczby, 0 koñcyz wpisywanie" << endl;
     
     ofstream plik1("plik1.txt");
     ofstream plik2("plik2.txt");
     bool done = false;
     
     while (!done)
     {
           int a;
           cin >> a;
           
           if (a == 0)
           {
                 done = true;
                 break;
           }
           else
           {
               if (a % 2 == 0)
               {
                   plik1 << a << endl;
               }
               else
               {
                   plik2 << a << endl;
               }
           }
     }
     plik1.close();
     plik2.close();
}

void matrix()
{
     cout << "Witaj w matrixie!";
     cin.get();
     
     srand(1);
     
     while(true)
     {
      int i = rand();
      if (i % 2)
      {
            cout << "1";
      }
      else
      {
          cout << "0";
      }
     }
}

int main() {
    system("chcp 1250");
    cls();
    
    bool done = false;
    while(done == false) {
        cout << "Wybierz program od 1 do 3: ";
        int wybor;
        cin >> wybor;
        
        switch(wybor)
        {
         case 1:
              program1();
              break;
         case 2:
              program2();
              break;
         case 3:
              program3();
              break;
         case 4:
              matrix();
              break;
         default:
              cout << "WprowadŸ poprawny numer!!!";
              break;    
    }
    
    cout << "\nCzy chcesz zakoñczyæ? (T/N): ";
    char toEnd;
    cin >> toEnd;
    
    if (toEnd == 'T' or toEnd == 't')
    {
       done = true;
    }
}

    cin.get();
}
