#include <fstream>
using namespace std;

int main()
{
    ofstream zapis("H:\\nowy.txt"); // �cie�ka bezwzgl�dna
    zapis << "tekst";
    zapis.close();
    return 0;
}
