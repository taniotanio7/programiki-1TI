#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

int nwd(int a, int b) {
    if (b > a) {
        return nwd(b, a);
    }
    if (a % b == 0) {
        return b;
    }

    return nwd(b, a % b);
};

int main() {
    setlocale(LC_ALL, "");

    int a;
    int b;

    cin >> a;
    cin >> b;   

    cout << nwd(a,b); 
}
