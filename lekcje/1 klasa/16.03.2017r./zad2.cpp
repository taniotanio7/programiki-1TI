#include <iostream>
using namespace std;

int main()
{
    int x[10];
    cout << "Podaj 10 liczb: " << endl;
    for (int i=0; i<10; i++) cin >> x[i];
    
    cout << "Liczby parzyste:" << endl;
    int suma_par=0;
    for (int i=0; i<10; i++)
    {
        if (x[i] % 2 == 0)
        {
         suma_par += x[i];
         cout << "x[" << i << "]" << endl;
        }
    }
    
    cout << "= " << suma_par << endl;
    
    cout << "Liczby nieparzyste: "<< endl;
    int suma_npar = 0;
    for (int i=0; i<10; i++)
    {
        if (x[i] % 2 != 0)
        {
         suma_npar += x[i];
         cout << "x[" << i << "]" << endl;
        }
    }
    
    cout << "= " << suma_npar << endl;
    
    cout << "Suma liczb o parzystych indeksach:" << endl;
    int suma_index = 0;
    for (int i=0; i<10; i++)
    {
        if (i % 2 == 0)
        {
         suma_index += x[i];
         cout << "x[" << i << "]" << endl;
        }
    }
    
    cout << "= " << suma_index << endl;
    
    cout << "Gdzie jest 7?" << endl;
    int ile_7 = 0;
    for (int i=0; i<10; i++)
    {
        if (x[i] == 7)
        {
         ile_7++;
         cout << "x[" << i << "]" << endl;
        }
    }
    
    cout << "W sumie by³o ich: " << ile_7;
    
    
    cin.get();
    cin.get();
    return 0;
}
