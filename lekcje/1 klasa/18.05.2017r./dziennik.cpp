//
// Created by Jonatan Witoszek & Maciej Moskała on 18.05.2017.
// Revised & recoded by Jonatan Witoszek on 23.05.2017.
//
// <--------------------->
// UWAGA!!!
// W prowamie zostały utworzone tablice o wielkości zmiennej, A NIE STAŁEJ!
// Nigdy, ale to prze nigdy nie rób tego w prawdziwym życiu.
//
// Dla takich przypadków tworzy się tablice dynamiczne używając wskażników oraz funkcji
// new oraz delete.
// Wtedy takie coś można zrobić.
// Zostało to pokazane przy tablicach ze średniami uczniów i z przedmiotów.
// So now you know.
//
// Jeszcze raz: NIE RÓB TEGO W DOMU!
// Ja mam lata doświadczenia przy pracy z efektami specjalnymi co czyni
// mnie totalnie uodpornionym.
// <--------------------->

#include <iostream>
#include <cstdio>
#include <ctime>
#include <iomanip>
#include <string>

#ifdef OS_WINDOWS // Oddzielne funkcje dla Windowsa i systemów UNIXopodobnych
void cls(void)
{
    system("cls");
}

void welcome(void)
{
    system("chcp 1250");
    cls();
}
#else

void cls(void)
{
    printf("\033[2J"); // Czyści ekran
    printf("\033[0;0f"); // Ustawia kursor w lewym, górnym rogu
}

void welcome(void)
{
}

#endif

void wait(void);

using namespace std;

struct dziennik
{
    int ilosc_ucz;
    int ilosc_prz;
};

int main() {
    welcome();

    dziennik dziennik;

    cout << "Witaj w naszym zacnym dzienniku!" << endl
         << "Z nami policzysz średnią na koniec roku." << endl << endl
         << "Wpisz ile chcesz wprowadzić przedmiotów: ";

    cin >> dziennik.ilosc_prz;

    cout << "Wpisz ile chcesz wprowadzić uczniów: ";

    cin >> dziennik.ilosc_ucz;

    string przedmioty[dziennik.ilosc_prz];
    string uczniowie[dziennik.ilosc_ucz];

    cout << "Podawaj przedmioty: " << endl;
    for (int i = 0; i < dziennik.ilosc_prz; i++) {
        cin >> przedmioty[i];
    }

    cout << "Podawaj uczniów: " << endl;
    for (int i = 0; i < dziennik.ilosc_ucz; i++) {
        cin >> uczniowie[i];
    }

    int oceny[dziennik.ilosc_prz][dziennik.ilosc_ucz];
    int ilosc_wpisane = 0;

    bool koniec = false;
    while (koniec == false) {
        // Wypisywnie przedmiotów
        cls();
        cout << "Wybierz przedmiot to wprowadzenia ocen: ";
        for (int i = 0; i < dziennik.ilosc_prz; i++) {
            cout << endl;
            cout << i + 1 << ". " << przedmioty[i];
        }

        cout << endl;

        int wybr_prz;
        cin >> wybr_prz;

        wybr_prz -= 1; // żeby pasowało pod tablice

        for (int i = 0; i < dziennik.ilosc_ucz; i++) {
            bool done = false;
            while (done == false) {
                cout << endl
                     << i + 1 << ". " << uczniowie[i] << ": ";
                cin >> oceny[wybr_prz][i];
                if (oceny[wybr_prz][i] <= 6 and oceny[wybr_prz][i] >= 1)
                    done = true;
                else {
                    cout << "Błędna ocena! Można podawać tylko z przedziału od 1 do 6." << endl
                         << "Wciśnij ENTER żeby wprowadzić jeszcze raz...";
                    wait();
                    cls();
                }
            }
        }

        ilosc_wpisane += 1;

        if (ilosc_wpisane >= dziennik.ilosc_prz)
        {
            cout << "Wprowadzono wszystkie niezbędne oceny." << endl;
            cout << "Czy chcesz zakończyć wpisywanie? (T/N): ";
            char end_choice;
            cin >> end_choice;

            if (end_choice == 'T' or end_choice == 't') {
                koniec = true;
            }
        }
        else
        {
            cout << "Zakończono wprowadzanie ocen dla przedmiotu " << przedmioty[wybr_prz] << endl;
            cout << "Do ukończenia pozostały jeszcze: " << dziennik.ilosc_prz - ilosc_wpisane << endl;
        }
    }

    cls();
    cout << "Rozpoczynam wyświetlanie ocen..." << endl;


    // LICZENIE ŚREDNIEJ
    // dla każdego przedmiotu

    double* naj_prz = new double[dziennik.ilosc_prz]; // średnia dla przedmiotu [ID PRZEDMIOTU]

    for (int i = 0; i < dziennik.ilosc_prz; i++)
    {
        int licz_prz = 0; // suma dla przedmiotu i do obliczenia średniej
        for (int i2 = 0; i2 < dziennik.ilosc_ucz; i2++)
        {
            licz_prz += oceny[i][i2];
        }
        naj_prz[i] = (double) licz_prz / (double) dziennik.ilosc_ucz;
    }

    // dla każdego uczenia

    double* naj_ucz = new double[dziennik.ilosc_ucz]; // średnia dla ucznia [ID UCZNIA]

    for (int i = 0; i < dziennik.ilosc_ucz; i++)
    {
        int licz_ucz = 0; // suma dla danego ucznia, potrzebna do obl. średniej
        for (int i2 = 0; i2 < dziennik.ilosc_prz; i2++)
        {
            licz_ucz += oceny[i2][i];
        }
        naj_ucz[i] = (double) licz_ucz / (double) dziennik.ilosc_prz;
    }

    // WYŚWIETLANIE TABELKI
    // Pierwsza linijka - przedmioty

    for (int i = -1; i < dziennik.ilosc_prz; i++)
    {
        if (i == -1)
        {
            cout << setw(7);
            cout << " ";
        }
        else
        {
            cout << setw(10);
            cout << przedmioty[i];
        }
    }

    cout << endl;

    // Kolejne linijki - uczniowie, ocena, ocena, ..., średnia ucznia

    for (int u = 0; u < dziennik.ilosc_ucz; u++)
    {
        cout << setw(7);
        cout << uczniowie[u]; // nazwa ucznia
        for (int p = 0; p < dziennik.ilosc_prz; p++)
        {
            cout << setw(10);
            cout << oceny[p][u]; // ocena z przedmiotu p, dla ucznia u
        }
        cout << setw(10);
        cout << naj_ucz[u]; // średnia ucznia pod koniec linijki
        cout << endl;
    }

    cout << endl;

    // Ostatnia linijka - średnia z każdego przedmiotu

    for (int p = -1; p < dziennik.ilosc_prz; p++)
    {
        if (p == -1) // Odstęp
        {
            cout << setw(7);
            cout << " ";
        }
        else
        {
            cout << setw(10);
            cout << naj_prz[p];
        }
    }

    // LICZENIE NAJLEPSZYCH
    // Średnie z przedmiotu

    double naj_val = naj_prz[0];
    int naj_curr = 0;

    for (int i = 0; i < dziennik.ilosc_prz; i++)
    {
        if (naj_val > naj_prz[i+1])
        {
            continue;
        }
        else
        {
            naj_val = naj_prz[i+1];
            naj_curr = i+1;
        }
    }

    // Średnie uczniów

    double naj_val_ucz = naj_ucz[0];
    int naj_curr_ucz = 0;

    for (int i = 0; i < dziennik.ilosc_ucz - 1; i++)
    {
        if (naj_val_ucz < naj_ucz[i+1])
        {
            naj_val_ucz = naj_ucz[i+1];
            naj_curr_ucz = i+1;
        }
    }

    cout << endl;
    cout << "Najlepszy przedmiot w klasie to: " << przedmioty[naj_curr]
         << endl << " średnia z niego to: " << naj_val << endl;

    cout << "Najlepszy uczeń w klasie to: " << uczniowie[naj_curr_ucz]
         << endl << " jego średnia to: " << naj_val_ucz;

    cin.get();
    cin.get();

    delete[] naj_ucz;
    delete[] naj_prz;
    return 0;
}
void wait(void)
{
    cin.get();
    cin.get();
}