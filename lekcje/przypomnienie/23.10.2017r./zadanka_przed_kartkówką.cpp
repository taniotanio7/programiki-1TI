#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void trojkat(int w) {
 for (int i = 1; i<=w; i++) { // dla każdej linijki
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

void zadanie3()
{
	int 
	  tab[5][5],
	  tab2[5][5];
	
	srand(time(NULL));

	for (int a = 0; a < 5; a++)
	{
		for (int b = 0; b < 5; b++)
		{
			tab[a][b] = 0;
			tab2[a][b] = 0;
		}
	}

	cout << "Tablica pierwsza:" << endl;

	for (int a = 0; a < 5; a++)
	{
		for (int b = 0; b < 5; b++)
		{
			tab[a][b] = rand() % 10;
			
			cout << setw(10) << tab[a][b];
		}
		cout << endl;
	}

	cout << "Tablica druga:" << endl;

	for (int a = 0; a < 5; a++)
	{
		for (int b = 0; b < 5; b++)
		{
			if (a == 0)
			{
				tab2[a][b] = tab[a + 4][b];
			}
			
			else
			{
				if (a == 1)
				{
					tab2[a][b] = tab[a + 1][b];
				}

				tab2[a + 1][b] = tab[a][b];
			}

			cout << setw(10) << tab2[a][b];
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
               cout << "Podaj ilość wierszy: ";
               int wiersze;
               cin >> wiersze;
               trojkat(wiersze);
               cin.get();
               break;
          case 2:
               cout << "Podaj wielkosć tablicy (x i y):" << endl;
               int x, y;
               cin >> x >> y;
               zadanie2(x,y);
               break;
          case 3:
               zadanie3();
               break;
          default:
               cout << "Błędny numer! Wprowadż numer od 1 do 4";
               cin.get();
               cin.get();
               continue;          
        }
        
        cout << "Czy chcesz zakończyć (T/N)? ";
        char czyKoniec;
        cin >> czyKoniec;
        
        if (czyKoniec == 'T' or czyKoniec == 't') {
           koniec = true;
        }
       }
}
