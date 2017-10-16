#include <iostream>
#include <cmath>

using namespace std;

void cls() {
 system("cls");    
}

int licz_delte(int a, int b, int c) {
 float b_2 = float(b);
 return int(pow(b_2,2)) - 4*a*c;
}

void oblicz_rownanie(int delta, int a, int b, int c) {
    if (delta < 0) {
       cout << "Brak rozwi¹zaina!";
    }
    else if (delta == 0) {
       cout << "x = " << (b * -1) / 2 * a;             
    }
    else {
       cout << "x1 = "
            << ((b * -1) - sqrt(delta)) / 2 * a << endl
            << "x2 = "
            << ((b * -1) + sqrt(delta)) / 2 * a;
    }    
}

int main() {
    system("chcp 1250");
    cls();
    
    cout << "Podaj a, b oraz c: ";
    int a, b, c;
    cin >> a >> b >> c;
    
    if (a == 0) {
       cout << "a nie mo¿e byæ równe zeru!";
       cin.get();
       cin.get();
       return 0;
    }
    
    int delta = licz_delte(a,b,c);
    
    oblicz_rownanie(delta,a,b,c);
    
    cin.get();
    cin.get();
    
    return 0;
}
