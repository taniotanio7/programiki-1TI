#include <iostream>
#include <cmath>

using namespace std;

int main() {
 cout << "Podaj przedzia³: ";
 int min, max;
 cin >> min >> max;
 
 for (int i = min; i <= max; i++) {
     // sprawdŸ czy parzysta
     if (i % 2 == 0) {
        cout << i << ", ";
     }
 }
 
 cin.get();
 cin.get();
 
 return 0;
}
