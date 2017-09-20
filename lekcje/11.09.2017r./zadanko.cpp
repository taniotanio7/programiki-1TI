#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void program1(void);
void program2(void);
void program3(void);
void program4(void);
void cls(void)
{
     system("cls");
}

int main()
{
    system("chcp 1250");
    cls();
    
    bool done = false;
    while (done == false)
    {
        cout << "Wybierz program:\n"
             << "1) Silnia\n"
             << "2) NWD\n"
             << "3) Liczby nieparzyste\n"
             << "4) Tablice\n";
             
        int wybor;
        cin >> wybor;
        
        switch(wybor)
        {
                     case 1: program1();
                             break;
                     case 2: program2();
                             break;
                     case 3: program3();
                             break;
                     case 4: program4();
                             break;
                     default: cout << "Let's try again!";
        }
        
        cout << "Czy chcesz zabawiæ siê jeszcze raz? (0/1)";
        int wybor2;
        cin >> wybor2;
        
        if (wybor2 == 0)
            done = true;
            
        cls();
    }   
    cin.get();
    return 0;
}

void program1(void)
{
 cls();
 cout << "Podaj liczbê do obliczenia silni: ";
 int input;
 cin >> input;
 
 int suma = 1;
 for (int i = 1; i <= input; i++)
 {
     suma *= i;
 }
 
 cout << "Silnia wynosi:" << suma << endl;
}

void program2(void)
{
}

void program3(void)
{
 cls();
 cout << "Podaj iloœæ liczb do wprowadzenia: ";
 int max;
 cin >> max;
 
 int suma = 0;
 
 for (int i = 0; i < max; i++)
 {
     int liczba;
     cin >> liczba;
     if (liczba % 2 == 1)
     {
      suma += liczba;
     }
 }
 
 cout << "Suma liczb nieparzystych wynosi: " << suma << endl;
}

void program4(void)
{
 srand(time(NULL));
 // 20. 0 - 36, DODAJE DZIEL¥CE PRZEZ 3
 
}



