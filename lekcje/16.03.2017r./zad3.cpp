#include <iostream>
using namespace std;

int main()
{
    char literki[10];
    cout << "Podawaj literki:" << endl;
    
    int ile_a = 0;
    for (int i=0; i<10; i++)
    {
        cin >> literki[i];
        if (literki[i] == 'a')
        {
           ile_a++;
           cout << "x[" << i << "]" << endl;
        }
    }
    
    cout << "W sumie bylo: " << ile_a << " literek a";
    cin.clear();
    cin.get();
    cin.get();
    
    return 0; 
}
