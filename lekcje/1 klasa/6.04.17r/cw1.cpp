#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    
    int n, m;
    int tab[100][100];
    
    cout << "Podaj wiersz: " << endl;
    cin >> n;
    cout << "Podaj kolumnê: " << endl;
    cin >> m;
    
    for (int wier = 0; wier < n; wier++)
    {
        for (int kol = 0; kol < m; kol++)
        {
            cout << "Podaj wartoœæ elementu ["<<wier<<"]["<<kol<<"]" << endl;
            cin >> tab[wier][kol];
        }
    }
    
    cout << "\nElementy tablicy:" << endl;
    for (int wier = 0; wier < n; wier++)
    {
        cout <<"["<<wier<<"] = ";
        for (int kol = 0; kol < m; kol++)
        {
                  cout << tab[wier][kol];
        }
        cout << endl;
    }
    
    cin.get();
    cin.get();
    return 0;
}
