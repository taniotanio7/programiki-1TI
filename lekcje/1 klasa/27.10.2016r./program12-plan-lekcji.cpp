#include <iostream>
#include <cstdio>

using namespace std;
int main() {
    system("chcp 1250");
    int lekcja, grupa;
    cout<<"W tym programie mo¿esz sprawdziæ jak¹ masz teraz lekcjê w czwartek na podstawie jej numeru\n";
    cout<<"\nWprowadŸ numer lekcji: ";
    cin>>lekcja;
    cout<<"\nWprowadŸ numer grupy: ";
    cin>>grupa;
    cout<<"\n";
    
    if (grupa==1) {
     if (lekcja==1||lekcja==2) cout<<"Masz PUTK";
     if (lekcja==3) cout<<"Masz biologiê";
     if (lekcja==4) cout<<"Masz lekcjê wychowawcz¹";
     if (lekcja==5||lekcja==6) cout<<"Masz programowaine";
     if (lekcja==7) cout<<"Masz chemiê";
     if (lekcja==8) cout<<"Masz angielski";
     if (lekcja>8||lekcja<1) cout<<"Nie masz teraz lekcji!";
}
     if (grupa==2) {
      if (lekcja==1||lekcja==2) cout<<"Masz programowanie";
      if (lekcja==3) cout<<"Masz biologiê";
      if (lekcja==4) cout<<"Masz lekcjê wychowawcz¹";
      if (lekcja==5||lekcja==6) cout<<"Masz PUTK";
      if (lekcja==7) cout<<"Masz chemiê";
      if (lekcja>7||lekcja<1) cout<<"Nie masz teraz lekcji!";
}
     if (grupa>2||grupa<1) cout<<"WprowadŸ poprawny numer grupy (tylko 1 lub 2)";
    

     
    cin.ignore();
    getchar();
    return 0;
}
