#include <iostream>
#include <cstdio>

//Wybór odpowiednich funkcji w oparciu o używany system.

#if _WIN32

    void clearconsole()
    {
          system("cls");
    }

#else

    #include <unistd.h>

    void clearconsole()
    {
      printf("\033[2J"); // Czyści ekran
      printf("\033[1;1H"); // Ustawia kursor w lewym, górnym rogu
    }

#endif

using namespace std;

/*void ClrStream(){
  cin.clear();
  cin.ignore();
}*/

void ClrWait(){
  cin.clear();
  cin.ignore();
  cin.get();
}

int main()
{
    system("chcp 1250");
    clearconsole();
    int wynik=0;
    int bledy=0;
    int ready=0;
    string imie, puste, odp, odp2, odp3, odp4, odp5, readychk;
    cout<<"Zanim zaczniesz podaj swoje imię: ";
    cin>>imie;
    cout<<"Witaj, "<<imie<<" w próbnym teście z chemii!\nTemat: Źródła energii.\n\n";
    cout<<"Aby kontynuować wciśnij Enter.";
    ClrWait();
    clearconsole();

    //Pytanie 1

    cout<<"Pytanie 1.\nJakiej reakcji uøywa się podczas przeróbki ropy naftowej?\n\nA - pirolizy\nB - destylacji\nC - izomeryzacji\nD - spalania\n\n";
    cin>>odp;
    if (odp=="b" or odp=="B") {
     wynik++;
     cout<<"\nDobrze!\n";
}
    else {
    bledy++;
     cout<<"\nŹle! :(\n";
}
    cout<<"Żeby przejść do następnego pytania wciśnij Enter";
    ClrWait();
    clearconsole();

    //Pytanie 2

    cout<<"Pytanie 2.\nJak wygląda reakcja półspalania metanu?\n\nA: metan+O2 -> CO+H2O\nB: metan+O2 -> CO2+H2O\nC: metan+O2 -> C+H2O\n\n";
    cin>>odp;
    if (odp=="a" or odp=="A") {
      wynik++;
      cout<<"\nDobrze!\n";
}
  else {
    bledy++;
    cout<<"\nŹle! :(\n";
}

  cout<<"Żeby przejść do następnego pytania wciśnij Enter...";
  ClrWait();
  clearconsole();

//Pytanie 3

  while (ready==0) {
        cin.clear();
        clearconsole();
        cout<<"Pytanie 3. \nPodaj paliwa stałe (4, od największej ilości węgla pierwiastkowego)\n\n(podaj odpowiedzi kolejno po siebie potwierdzajac przejście do następnej wciśnięciem Enter):\n";
        getline(cin, odp);
        getline(cin, odp2);
        getline(cin, odp3);
        getline(cin, odp4);
        cout<<"\n";
        cout<<"Twoje odpowiedzi to: "<<odp<<", "<<odp2<<", "<<odp3<<", "<<odp4<<"\n";
        cout<<"Czy twoja odpowiedź się zgadza? (t/n): ";
        cin>>readychk;
        if (readychk=="t" or readychk=="T") ready=1;
        if (readychk=="n" or readychk=="N") {
           ready=0;
           clearconsole();
     }
}
  if (odp=="antracyt" and odp2=="węgiel kamienny" and odp3=="węgiel brunatny" and odp4=="torf") {
    wynik++;
    cout<<"\nDobrze!\n";
  }
  else {
    bledy++;
    cout<<"\nŹle! :(\nPoprawna odpowiedź: antracyt, węgiel kamienny, węgiel brunatny, torf\n";
  }
  cout<<"Żeby przejść do następnego pytania wciśnij Enter";
  ClrWait();
  clearconsole();

  //Pytanie 4

  cout<<"Pytanie 4. Jak wygląda wzór ogólny alkanów?\nA - Cn H(2n+2)\nB - Cn H(2+1)\nC - Cn H(2n)\nD - Cn H(2n-1)\n\n";
  cin.clear();
  cin>>odp;
  if (odp=="a" or odp=="A") {
     wynik++;
     cout<<"\nDobrze!\n";
}

  else {
     bledy++;
     cout<<"\nŹle! :(\n";
}

  cout<<"Żeby przejść do następnego pytania wciśnij Enter...";
  ClrWait();
  clearconsole();

//Pytanie 5

  ready=0;
  while (ready==0) {
      cin.clear();
      cout<<"Pytanie 5. Oto przykładowy wzór izomeru benzyny:\nCH(3) - CH(2) - CH(2) - CH(2)\nJaki to typ łańcucha?\n\n";
      getline(cin, odp);
      cout<<"Twoja odpowiedź to: "<<odp<<"\n";
      cout<<"Czy twoja odpowiedź się zgadza (t/n)? ";
      cin>>readychk;
      if (readychk=="t" or readychk=="T") ready=1;
      if (readychk=="n" or readychk=="N") {
        ready=0;
        clearconsole();
      }
  }
  if (odp=="prosty") {
    wynik++;
    cout<<"\nDobrze!\n";
  }

  else {
    bledy++;
    cout<<"\nŹle! :(\n";
  }

  cout<<"Żeby przejść do następnego pytania wciśnij Enter...";
  ClrWait();
  clearconsole();

  //Pytanie 6

  ready=0;
  while (ready==0) {
      cin.clear();
      cout<<"Pytanie 6. LO=95, podaj ilość procentową heptanu: ";
      getline(cin, odp);
      cout<<"Twoja odpowiedź to: "<<odp<<"\n";
      cout<<"Czy twoja odpowiedź się zgadza (t/n)? ";
      cin>>readychk;
      if (readychk=="t" or readychk=="T") ready=1;
      if (readychk=="n" or readychk=="N") {
        ready=0;
        clearconsole();
      }
  }
  if (odp=="5" or odp=="5%") {
    wynik++;
    cout<<"\nDobrze!\n";
  }

  else {
    bledy++;
    cout<<"\nŹle! :(\n";
  }

  cout<<"Żeby przejść do następnego pytania wciśnij Enter...";
  ClrWait();
  clearconsole();

  //Pytanie 7

  ready=0;
  while (ready==0) {
      cin.clear();
      cout<<"Pytanie 7. W jakim rodzaju benzyny stosuje się ołów jako środek przeciwstukowy:\n\n";
      getline(cin, odp);
      cout<<"Twoja odpowiedź to: "<<odp<<"\n";
      cout<<"Czy twoja odpowiedź się zgadza (t/n)? ";
      cin>>readychk;
      if (readychk=="t" or readychk=="T") ready=1;
      if (readychk=="n" or readychk=="N") {
        ready=0;
        clearconsole();
      }
  }
  if (odp=="lotnicza" or odp=="lotniczej" or odp=="lotniczych") {
    wynik++;
    cout<<"\nDobrze!\n";
  }

  else {
    bledy++;
    cout<<"\nŹle! :(\n";
  }

  cout<<"Żeby przejść do następnego pytania wciśnij Enter...";
  ClrWait();
  clearconsole();

  //Pytanie 8

  ready=0;
  while (ready==0) {
      cin.clear();
      cout<<"Pytanie 8. Ile atomów węgla ma nonan:\n\n";
      getline(cin, odp);
      cout<<"Twoja odpowiedź to: "<<odp<<"\n";
      cout<<"Czy twoja odpowiedź się zgadza (t/n)? ";
      cin>>readychk;
      if (readychk=="t" or readychk=="T") ready=1;
      if (readychk=="n" or readychk=="N") {
        ready=0;
        clearconsole();
      }
  }
  if (odp=="9") {
    wynik++;
    cout<<"\nDobrze!\n";
  }

  else {
    bledy++;
    cout<<"\nŹle! :(\n";
  }

  cout<<"Żeby przejść do następnego pytania wciśnij Enter...";
  ClrWait();
  clearconsole();

  //Pytanie 9

  cout<<"Pytanie 9. Jaki z podanych związków jest gazem cieplarnianym?\nA - butan\nB - ozon\nC - freony\nD - H(2)O\n\n";
  cin>>odp;
  if (odp=="D" or odp=="d") {
    wynik++;
    cout<<"\nDobrze!\n";
  }

  else {
    bledy++;
    cout<<"\nŹle! :(\n";
  }

  cout<<"Żeby przejść do następnego pytania wciśnij Enter...";
    ClrWait();
    clearconsole();

  //Pytanie 10... ?

  cout<<"Pytanie 10. Jaka elektrownia ekologiczna jest według ciebie najlepsza? ";
  ClrWait();
  cout<<"Świetna odpowiedź (nawet nie napisałem funkcji, która by ją sprawdzała hehe) ale opinie są względne dlatego to zadanie nie podlega ocenie.";
  ClrWait();
  cout<<"Zdziwiony? No dobra... dam ci jeszcze jedną szansę. Czas na...";
  ClrWait();
  cout<<"...";
  ClrWait();
  cout<<"................";
  ClrWait();
  cout<<"ostatnie pytanie!!!\n\n";
  cout<<"I tak wiem że nie masz wyboru, ale potwierdź przejście do następnego pytania wciskająć Enter...";
  cin.clear();
  cin.get();
  clearconsole();

  //Pytanie 11...?

  cout << "Pytanie 11... tzn. 10.\nPodaj skład gazu koksowniczego:\n\nA - etan\nB - metan\nC - propan\nD - butan\n\n";
  cin >> odp;
  if (odp=="b" or odp=="B") {
    wynik++;
    cout<<"\nDobrze!\n";
  }

  else {
    bledy++;
    cout<<"\nŹle! :(\n";
  }

  //Koniec

  cout << "Udało ci się dobrnąć do końca! Pora zobaczyć jak Ci poszło! Wciśnij Enter, aby przejść do wyników";
  ClrWait();
  clearconsole();

  cout << "Twój wynik to:\n" << wynik <<"/10\n" <<"Ilość popełnionych błędów: "<< bledy<<"\n\n";
  if (wynik==10) cout<<"Brawo brawo bystrzaku! Udało Ci się odpowiedzieć bezbłędnie na wszystkie pytania! (no prawie, hehe).";
  if (wynik<=9 and wynik>=6) cout<<"Jest nieźle! Popracuj jeszcze trochę żeby poprawić swoje błędy.";
  if (wynik==5) cout<<"Odpowiedziałeś poprawnie na połowę pytań! ... Połowę. Zdałbyś. Ale stać Cię na więcej!";
  if (wynik<=4) cout<<"Nie zdałeś! ... Tak mi przykro. Żartowałem. Wracaj do książki i wróć kiedy będziesz gotowy leniwcze! No już, bo powiem mamie!";
  cout<<"\n\n\n\nTo już koniec sprawdzianu, "<< imie <<"! Dziękuję za świetnie spędzony czas! Aby zakończyć wciśnij Enter...";

  getchar();
  return 0;

}


/* http://stackoverflow.com/questions/7911166/clearing-the-console-in-c

*/
