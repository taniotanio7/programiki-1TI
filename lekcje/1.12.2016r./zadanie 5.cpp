/* Zadania:
           1. Napisz program, kt�ry zapyta o podanie has�a do programu (info za kt�rym razem zosta�o odgadni�te).
           2. Wypisze 50 liczb, (whie/do while)
           3. Od 100 do 5 w p�tli for
           4. Program, zapyta od podanie dw�ch liczb: w - wiersze, k - kolumny (ew. znak), prostok�t pusty w �rodku z jedn� przek�tn�
           5. Pytamy o podanie n (ilo�ci wierszy), po czym wypisuje piramid�
           1
           24
           369
           481216
           6. Kolejne pot�gi liczby 2 do 10
           7. Wypisuje sum� liczb od 1 do n tylko wtedy kiedy liczba jest parzysta (podzielna przez 2)
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    int n,i=1,i2;
    cout << "Podaj liczb� n: ";
    cin >> n;
    
    while (i<=n) 
    {
    cout << i << " ";
    for (i2=2; i2<=i; i2++) {
           cout << i*i2 << " ";
        }
    cout << endl;
    i++;
}
    cin.ignore();
    getchar();
    return 0;
}
