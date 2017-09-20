/* Zadania:
           1. Napisz program, który zapyta o podanie has³a do programu (info za którym razem zosta³o odgadniête).
           2. Wypisze 50 liczb, (whie/do while)
           3. Od 100 do 5 w pêtli for
           4. Program, zapyta od podanie dwóch liczb: w - wiersze, k - kolumny (ew. znak), prostok¹t pusty w œrodku z jedn¹ przek¹tn¹
           5. Pytamy o podanie n (iloœci wierszy), po czym wypisuje piramidê
           1
           24
           369
           481216
           6. Kolejne potêgi liczby 2 do 10
           7. Wypisuje sumê liczb od 1 do n tylko wtedy kiedy liczba jest parzysta (podzielna przez 2)
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    int n,i=1,i2;
    cout << "Podaj liczbê n: ";
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
