// Napisz program, kt�ry wypisze liczby od 0-20 i przy tych, kt�re nie s� podzielne przez 3 wypisze tak� informacj�.

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    for (int i=0; i<=20; i++)
    {
        cout << i;
        if (i%3!=0) cout << " - liczba nie jest podzielna przez 3";
        cout << endl;
    }
    getchar();
    return 0;
}
