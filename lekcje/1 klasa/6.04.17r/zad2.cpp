#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    
    srand(time(NULL));
    int tab[5][5];
    
    int sum[5] = {0};
    int sum_total = 0;
    
    // Generator los. liczb
    for (int i = 0; i<5; i++) // Wiersze
    {
        for (int i2 = 0; i2<5; i2++) // Kolumny
        {
            tab[i][i2] = rand() % 2;
            if (tab[i][i2] == 1)
            {
               sum[i]++;
            }
        }
        sum_total += sum[i];
    }
    
    // Wyœwietlanie wyników
    for (int i = 0; i<5; i++) // Wiersze
    {
        for (int i2 = 0; i2<5; i2++) // Kolumny
        {
            cout << tab[i][i2] << " ";
        }
        cout << "suma 1 = " << sum[i];
        cout << endl;
    }
    
    cout <<"\nSuma wszystkich 1 = " << sum_total;
       
    
    cin.get();
    return 0;
}
