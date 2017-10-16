//
// Created by Jonatan Witoszek on 16.10.2017.
//

#include <iostream>
#include <cmath>

using namespace std;

bool czyPierwsza(int n) {
    for (int i = 2; i <= n; i++)
    {
        if (i == n)
            return true;
        if (n % i == 0) {
            return false;
        }
    }
}

int main() {
    bool koniec = false;
    while (!koniec) {
        cout << "Podaj liczbę: ";
        int n;
        cin >> n;

        if (n == 0) {
            cout << "To jest zero...";
            cin.get();
            cin.get();
            continue;
        }

        if (n == 1) {
            cout << "1 jest liczbą pierwszą";
            cin.get();
            cin.get();
            continue;
        }


        if (czyPierwsza(n))
            cout << n << " jest liczbą pierwszą";
        else
            cout << n << " nie jest liczbą pierwszą";

        cout << "\nCzy chcesz policzyć jeszcze raz? (T/N): ";
        char wybor;
        cin >> wybor;

        if (wybor == 'n' or wybor == 'N')
            koniec = true;

    }
}
