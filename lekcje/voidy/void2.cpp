//
// Created by Jonatan Witoszek & Maciej Moska�a on 18.05.2017.
// Revised & recoded by Jonatan Witoszek on 23.05.2017.
//
// <--------------------->
// UWAGA!!!
// W prowamie zosta�y utworzone tablice o wielko�ci zmiennej, A NIE STA�EJ!
// Nigdy, ale to prze nigdy nie r�b tego w prawdziwym �yciu.
//
// Dla takich przypadk�w tworzy si� tablice dynamiczne u�ywaj�c wska�nik�w oraz funkcji
// new oraz delete.
// Wtedy takie co� mo�na zrobi�.
// Zosta�o to pokazane przy tablicach ze �redniami uczni�w i z przedmiot�w.
// So now you know.
//
// Jeszcze raz: NIE R�B TEGO W DOMU!
// Ja mam lata do�wiadczenia przy pracy z efektami specjalnymi co czyni
// mnie totalnie uodpornionym.
// <--------------------->

#include <iostream>
#include <cstdio>
#include <ctime>
#include <iomanip>
#include <string>

#ifdef OS_WINDOWS // Oddzielne funkcje dla Windowsa i system�w UNIXopodobnych
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
    printf("\033[2J"); // Czy�ci ekran
    printf("\033[0;0f"); // Ustawia kursor w lewym, g�rnym rogu
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
         << "Z nami policzysz �redni� na koniec roku." << endl << endl
         << "Wpisz ile chcesz wprowadzi� przedmiot�w: ";

    cin >> dziennik.ilosc_prz;

    cout << "Wpisz ile chcesz wprowadzi� uczni�w: ";

    cin >> dziennik.ilosc_ucz;

    string przedmioty[dziennik.ilosc_prz];
    string uczniowie[dziennik.ilosc_ucz];

    cout << "Podawaj przedmioty: " << endl;
    for (int i = 0; i < dziennik.ilosc_prz; i++) {
        cin >> przedmioty[i];
    }

    cout << "Podawaj uczni�w: " << endl;
    for (int i = 0; i < dziennik.ilosc_ucz; i++) {
        cin >> uczniowie[i];
    }

    int oceny[dziennik.ilosc_prz][dziennik.ilosc_ucz];
    int ilosc_wpisane = 0;

    bool koniec = false;
    while (koniec == false) {
        // Wypisywnie przedmiot�w
        cls();
        cout << "Wybierz przedmiot to wprowadzenia ocen: ";
        for (int i = 0; i < dziennik.ilosc_prz; i++) {
            cout << endl;
            cout << i + 1 << ". " << przedmioty[i];
        }

        cout << endl;

        int wybr_prz;
        cin >> wybr_prz;

        wybr_prz -= 1; // �eby pasowa�o pod tablice

        for (int i = 0; i < dziennik.ilosc_ucz; i++) {
            bool done = false;
            while (done == false) {
                cout << endl
                     << i + 1 << ". " << uczniowie[i] << ": ";
                cin >> oceny[wybr_prz][i];
                if (oceny[wybr_prz][i] <= 6 and oceny[wybr_prz][i] >= 1)
                    done = true;
                else {
                    cout << "B��dna ocena! Mo�na podawa� tylko z przedzia�u od 1 do 6." << endl
                         << "Wci�nij ENTER �eby wprowadzi� jeszcze raz...";
                    wait();
                    cls();
                }
            }
        }

        ilosc_wpisane += 1;

        if (ilosc_wpisane >= dziennik.ilosc_prz)
        {
            cout << "Wprowadzono wszystkie niezb�dne oceny." << endl;
            cout << "Czy chcesz zako�czy� wpisywanie? (T/N): ";
            char end_choice;
            cin >> end_choice;

            if (end_choice == 'T' or end_choice == 't') {
                koniec = true;
            }
        }
        else
        {
            cout << "Zako�czono wprowadzanie ocen dla przedmiotu " << przedmioty[wybr_prz] << endl;
            cout << "Do uko�czenia pozosta�y jeszcze: " << dziennik.ilosc_prz - ilosc_wpisane << endl;
        }
    }

    cls();
    cout << "Rozpoczynam wy�wietlanie ocen..." << endl;


    // LICZENIE �REDNIEJ
    // dla ka�dego przedmiotu

    double* naj_prz = new double[dziennik.ilosc_prz]; // �rednia dla przedmiotu [ID PRZEDMIOTU]

    for (int i = 0; i < dziennik.ilosc_prz; i++)
    {
        int licz_prz = 0; // suma dla przedmiotu i do obliczenia �redniej
        for (int i2 = 0; i2 < dziennik.ilosc_ucz; i2++)
        {
            licz_prz += oceny[i][i2];
        }
        naj_prz[i] = (double) licz_prz / (double) dziennik.ilosc_ucz;
    }

    // dla ka�dego uczenia

    double* naj_ucz = new double[dziennik.ilosc_ucz]; // �rednia dla ucznia [ID UCZNIA]

    for (int i = 0; i < dziennik.ilosc_ucz; i++)
    {
        int licz_ucz = 0; // suma dla danego ucznia, potrzebna do obl. �redniej
        for (int i2 = 0; i2 < dziennik.ilosc_prz; i2++)
        {
            licz_ucz += oceny[i2][i];
        }
        naj_ucz[i] = (double) licz_ucz / (double) dziennik.ilosc_prz;
    }

    // WY�WIETLANIE TABELKI
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

    // Kolejne linijki - uczniowie, ocena, ocena, ..., �rednia ucznia

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
        cout << naj_ucz[u]; // �rednia ucznia pod koniec linijki
        cout << endl;
    }

    cout << endl;

    // Ostatnia linijka - �rednia z ka�dego przedmiotu

    for (int p = -1; p < dziennik.ilosc_prz; p++)
    {
        if (p == -1) // Odst�p
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
    // �rednie z przedmiotu

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

    // �rednie uczni�w

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
         << endl << " �rednia z niego to: " << naj_val << endl;

    cout << "Najlepszy ucze� w klasie to: " << uczniowie[naj_curr_ucz]
         << endl << " jego �rednia to: " << naj_val_ucz;

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
