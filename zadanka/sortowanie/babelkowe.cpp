//
// Created by Jonatan Witoszek on 09.05.2018.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    setlocale(LC_ALL, "");

    int tab[5];

    for (int i = 0; i<5; i++) {
        tab[i] = rand() % 10;
    }

    for(i = 0; i < 4; i++)
        for(k = 0; k < 4; k++)
            if(tab[k] > tab[k + 1]) swap(tab[k], tab[k + 1]);

    for (int i = 0; i<5; i++) {
        cout << tab[i];
    }

    return 0;
}