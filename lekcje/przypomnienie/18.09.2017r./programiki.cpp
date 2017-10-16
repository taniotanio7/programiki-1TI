#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*

	Programiki:

	1. Napisz program, który obliczy sumê odpowiadaj¹cych sobie elementów dwóch tablic jedno 

wymiarowych A i B wype³nionych liczbami losowymi z zakresu od 0 do wartoœci podanej przez 

u¿ytkownika, a nastêpnie zapisze je do tablicy C

A[0] + B[0] = C[0]

	2. Napisz program, który tablicê 2-wymiarow¹ 6x5 wype³ni losowymi cyframi z zakresu od 0 

do 9, nastêpnie program wypisze wszystkie cyfry, które s¹ parzyste i wszystkie, które s¹ 

nieparzyste i je zsumuje (n. parzyste i ich suma, parzyste i ich suma).

	3. Tablica 1-wym 20 elementowa losujemy do niej liczby z zakresu dowolnego, nastêpnie 

wyœwietlana jest œrednia (float) tych liczb, a nastêpnie wszystkie liczby, które s¹ mniejsze od 

œredniej

	4. 10 liczb, które wpisujemy z klawiatury. Po wpisaniu, suma liczb nieparzystych 

(wystarczy while). 

*/

void program1(void);
void program2(void);
void program3(void);
void program4(void);
void cls(void) {
     system("cls");
};

int main() {
    system("chcp 1250");
    
    bool zakonczProgram = false;
    
    do {
        cls();
        cout << "Wybierz zadanie:" << endl
             << "1) Suma liczb" << endl
             << "2) Liczby parzyste / nie parzyste" << endl
             << "3) Œrednia" << endl
             << "4) Suma liczb nie parzystych" << endl << endl;
             
        int wybranyProgram;
        cin >> wybranyProgram;
        
        switch(wybranyProgram)
        {
         case 1: program1();
                 break;
         case 2: program2();
                 break;
         case 3: program3();
                 break;
         case 4: program4();
                 break;
         default: cout << "Wpisz poprawny nume!";
                  break;
        }
        
        cout << "\nCzy chcesz zakoñczyæ? (T/N) ";
        char wybor;
        cin >> wybor;
        if (wybor == 'T' or wybor == 't')
        {
                  zakonczProgram = true;   
        }
    } while (zakonczProgram == false);
    
    return 0;
}

void program1(void) {
     cout << "Podaj zakres (0-n): " << endl;
     int zakres;
     cin >> zakres;
     
     int a[10];
     int b[10];
     int c[10];
     
     srand(time(NULL));
     
     for (int i = 0; i<10; i++)
     {
         a[i] = rand() % zakres;
         b[i] = rand() % zakres;
         c[i] = a[i] + b[i];
         
         cout << "c[" << i << "] = " << c[i] << endl;
     }
}

void program2(void) {
     
     int tablica[6][5];
     int sumaNP = 0;
     int sumaP = 0;
     
     srand(time(NULL));
     
     for (int i = 0; i<6; i++)
     {
         for (int i2 = 0; i2<5; i2++)
         {
             tablica[i][i2] = rand() % 9;
             cout << "tablica[" << i << "] = " << tablica[i][i2] << ", ";
             if (tablica[i][i2] % 2 == 0) // parzysta
             {
                sumaP += tablica[i][i2];
             }
             else // nieparzysta
             {
                  sumaNP += tablica[i][i2];
             }
         }
         cout << endl;
     }
     
     cout << "Suma nieparzystych: " << sumaNP << endl
          << "Suma parzystych: " << sumaP << endl;
}
void program3(void) {
     
     int tablica[20];
     int sumaDoSredniej = 0;
     
     srand(time(NULL));
     
     for (int i = 0; i<20; i++)
     {
         tablica[i] = rand() % 10;
         sumaDoSredniej += tablica[i];
     }
     
     float srednia = (float)sumaDoSredniej / 20;
     
     int suma = 0;
     
     for (int i = 0; i<20; i++)
     {
         if (tablica[i] < srednia)
         {
            suma += tablica[i];
         }
     }
     
     cout << "Suma liczb mniejszych od œredniej: " << suma;
}
void program4(void) {
     
     int suma = 0;
     
     for (int i = 0; i < 10; i++)
     {
         int temp;
         cin >> temp;
         if (temp % 2 != 0)
            suma += temp;
     }
     
     cout << "Suma wprowadzonych liczb nieparzystych: " << suma;
}
