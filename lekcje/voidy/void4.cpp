#include <iostream>
#include <cmath>

using namespace std;

int main() {
 cout << "Podaj przedzia�: ";
 int min, max;
 cin >> min >> max;
 
 for (int i = min; i <= max; i++) {
     // sprawd� czy parzysta
     if (i % 2 == 0) {
        cout << i << ", ";
     }
 }
 
 cin.get();
 cin.get();
 
 return 0;
}
