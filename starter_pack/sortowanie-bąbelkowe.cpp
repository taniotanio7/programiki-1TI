#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int tab[10];
    srand(time(NULL));
    
    for (int i = 0; i<10; i++) {
        tab[i] = rand() % 100;
    }

    // Sortowanie
    for (int i = 0; i<10; i++) {
        for (int j = 0; j<9; j++) {
            if (tab[j] < tab[j+1]) {
                int temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }

    // Wypisywanie
    for (int i = 0; i<10; i++) {
        cout << tab[i] << endl;
    }
}
