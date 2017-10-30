#include <fstream>
using namespace std;

int main()
{
    ofstream zapis("H:\\nowy.txt"); // œcie¿ka bezwzglêdna
    zapis << "tekst";
    zapis.close();
    return 0;
}
