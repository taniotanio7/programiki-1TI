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

    // Sortowanie przez wstawianie

    for(int i=0; i<N; i++)
    {
        int temp=tablica[i];
        int j=i-1;
        while(j>=0 && temp<tablica[j])
        {
            tablica[j+1]=tablica[j];
            j--;
        }
        tablica[j+1]=temp;
    }

    for (int i = 0; i<5; i++) {
        cout << tablica[i] << " ";
    }

    return 0;
}