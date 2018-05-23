//
// Created by Jonatan Witoszek on 23.05.2018.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    static int N = 5;

    int tablica[N];

    srand(time(NULL));

    for (int i = 0; i<N; i++) {
        tablica[i] = rand() % 10;
    }

    // Sortowanie przez wybieranie

    for(int i=0; i<N; i++)
    {
        int min = i;
        for(int j=i+1; j<N-1; j++)
        {
            if(tablica[j]<tablica[min])
            {
                min = j;
            }
        }
        int temp = tablica[i];
        tablica[i] = tablica[min];
        tablica[min] = temp;
    }

    for (int i = 0; i<5; i++) {
        cout << tablica[i] << " ";
    }

    return 0;
}