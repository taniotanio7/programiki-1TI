#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void trojkat(int w) {
 for (int i = 1; i<=w; i++) { // dla ka¿dej linijki
     if(i == 1) {
          for (int znak = 1; znak <= w; znak++) { // dla pierwszej linijki
              cout << "x";
          }
     } else {
       for (int znak = 1; znak <= w; znak++)
       {
           if(znak == i or znak == w) {
               cout << "x";
           } else {
               cout << " ";
           }
       }
     }
     cout << endl;
 }   
}

void zadanie2(int x, int y) {
 int tab[100][100];
 int tab2[100][100];
 srand(time(NULL));
 
 for (int i = 0; i<x; i++) {
     for (int i2 = 0; i2<y; i2++) {
         tab[i][i2] = (rand() % 2) + 3;
         cout << "tab1" << "[ " << i << "][ " << i2 << "] = " << tab[i][i2] << endl;
         tab2[i][i2] = tab[i][i2] % 2;
     }
}
 for (int i = 0; i<x; i++) {
     for (int i2 = 0; i2<y; i2++) {
         cout << "tab2" << "[ " << i << "][ " << i2 << "] = " << tab2[i][i2] << endl;
     }
}
}

void zadanie3() {
 int tab[5][5];
 int tab2[5][5];
 
 cout << "Tablica pierwsza:" << endl;
 
  for (int i = 0; i<5; i++) {
     for (int i2 = 0; i2<5; i2++) {
         tab[i][i2] = rand() % 10;
         cout << tab[i][i2] << " ";
     }
     cout << endl;
}

 cout << "Tablica druga:" << endl;
     
  for (int i = 0; i<5; i++) {
      for (int i2 = 0; i2<5; i2++) {
          if (i != 0) {
             tab2[i+1][i2+1] = tab[i][i2];
          } else {
             tab2[i][i2] = tab[4][i2];
          }
          
          cout << tab2[i][i2] << " ";
      }
      cout << endl;
}
}



int main() {
 system("chcp 1250");
 system("cls");
 
 bool koniec = false;
 while (koniec == false) {
       system("cls");
       cout << "Wybierz zadanie (1-4): ";
       int wybor;
       cin >> wybor;
       
       switch(wybor) {
          case 1:
               cout << "Podaj iloœæ wierszy: ";
               int wiersze;
               cin >> wiersze;
               trojkat(wiersze);
               cin.get();
               break;
          case 2:
               cout << "Podaj wielkosæ tablicy (x i y):" << endl;
               int x, y;
               cin >> x >> y;
               zadanie2(x,y);
               break;
          case 3:
               zadanie3();
               break;
          default:
               cout << "B³êdny numer! Wprowad¿ numer od 1 do 4";
               cin.get();
               cin.get();
               continue;          
        }
        
        cout << "Czy chcesz zakoñczyæ (T/N)? ";
        char czyKoniec;
        cin >> czyKoniec;
        
        if (czyKoniec == 'T' or czyKoniec == 't') {
           koniec = true;
        }
       }
}
