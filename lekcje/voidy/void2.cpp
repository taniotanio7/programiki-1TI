//
// Created by Jonatan Witoszek & Maciej Moska³a on 18.05.2017.
// Revised & recoded by Jonatan Witoszek on 23.05.2017.
//
// <--------------------->
// UWAGA!!!
// W prowamie zosta³y utworzone tablice o wielkoœci zmiennej, A NIE STA£EJ!
// Nigdy, ale to prze nigdy nie rób tego w prawdziwym ¿yciu.
//
// Dla takich przypadków tworzy siê tablice dynamiczne u¿ywaj¹c wska¿ników oraz funkcji
// new oraz delete.
// Wtedy takie coœ mo¿na zrobiæ.
// Zosta³o to pokazane przy tablicach ze œredniami uczniów i z przedmiotów.
// So now you know.
//
// Jeszcze raz: NIE RÓB TEGO W DOMU!
// Ja mam lata doœwiadczenia przy pracy z efektami specjalnymi co czyni
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
    printf("\033[2J"); // Czyœci ekran
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
         << "Z nami policzysz œredni¹ na koniec roku." << endl << endl
         << "Wpisz ile chcesz wprowadziæ przedmiotów: ";

    cin >> dziennik.ilosc_prz;

    cout << "Wpisz ile chcesz wprowadziæ uczniów: ";

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

        wybr_prz -= 1; // ¿eby pasowa³o pod tablice

        for (int i = 0; i < dziennik.ilosc_ucz; i++) {
            bool done = false;
            while (done == false) {
                cout << endl
                     << i + 1 << ". " << uczniowie[i] << ": ";
                cin >> oceny[wybr_prz][i];
                if (oceny[wybr_prz][i] <= 6 and oceny[wybr_prz][i] >= 1)
                    done = true;
                else {
                    cout << "B³êdna ocena! Mo¿na podawaæ tylko z przedzia³u od 1 do 6." << endl
                         << "Wciœnij ENTER ¿eby wprowadziæ jeszcze raz...";
                    wait();
                    cls();
                }
            }
        }

        ilosc_wpisane += 1;

        if (ilosc_wpisane >= dziennik.ilosc_prz)
        {
            cout << "Wprowadzono wszystkie niezbêdne oceny." << endl;
            cout << "Czy chcesz zakoñczyæ wpisywanie? (T/N): ";
            char end_choice;
            cin >> end_choice;

            if (end_choice == 'T' or end_choice == 't') {
                koniec = true;
            }
        }
        else
        {
            cout << "Zakoñczono wprowadzanie ocen dla przedmiotu " << przedmioty[wybr_prz] << endl;
            cout << "Do ukoñczenia pozosta³y jeszcze: " << dziennik.ilosc_prz - ilosc_wpisane << endl;
        }
    }

    cls();
    cout << "Rozpoczynam wyœwietlanie ocen..." << endl;


    // LICZENIE ŒREDNIEJ
    // dla ka¿dego przedmiotu

    double* naj_prz = new double[dziennik.ilosc_prz]; // œrednia dla przedmiotu [ID PRZEDMIOTU]

    for (int i = 0; i < dziennik.ilosc_prz; i++)
    {
        int licz_prz = 0; // suma dla przedmiotu i do obliczenia œredniej
        for (int i2 = 0; i2 < dziennik.ilosc_ucz; i2++)
        {
            licz_prz += oceny[i][i2];
        }
        naj_prz[i] = (double) licz_prz / (double) dziennik.ilosc_ucz;
    }

    // dla ka¿dego uczenia

    double* naj_ucz = new double[dziennik.ilosc_ucz]; // œrednia dla ucznia [ID UCZNIA]

    for (int i = 0; i < dziennik.ilosc_ucz; i++)
    {
        int licz_ucz = 0; // suma dla danego ucznia, potrzebna do obl. œredniej
        for (int i2 = 0; i2 < dziennik.ilosc_prz; i2++)
        {
            licz_ucz += oceny[i2][i];
        }
        naj_ucz[i] = (double) licz_ucz / (double) dziennik.ilosc_prz;
    }

    // WYŒWIETLANIE TABELKI
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

    // Kolejne linijki - uczniowie, ocena, ocena, ..., œrednia ucznia

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
        cout << naj_ucz[u]; // œrednia ucznia pod koniec linijki
        cout << endl;
    }

    cout << endl;

    // Ostatnia linijka - œrednia z ka¿dego przedmiotu

    for (int p = -1; p < dziennik.ilosc_prz; p++)
    {
        if (p == -1) // Odstêp
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
    // Œrednie z przedmiotu

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

    // Œrednie uczniów

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
         << endl << " œrednia z niego to: " << naj_val << endl;

    cout << "Najlepszy uczeñ w klasie to: " << uczniowie[naj_curr_ucz]
         << endl << " jego œrednia to: " << naj_val_ucz;

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
