#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    int kasa;
    cout << "WprowadŸ kwotê do roz³o¿enia pieni¹¿kuf: ";
    cin >> kasa;
    
    int a = 0; // 100
    int b = 0; // 50
    int c = 0; // 20
    int d = 0; // 10
    int e = 0; // 5
    int f = 0; // 2
    int g = 0; // 1
    
    while (kasa > 0)
    {
          if (kasa / 100 >= 1)
          {
                     kasa -= 100;
                     a++;
                     continue;
          }
          if (kasa / 50 > 0)
          {
                     kasa -= 50;
                     b++;
                     continue;
          }
          if (kasa / 20 > 0)
          {
                     kasa -= 20;
                     c++;
                     continue;
          }
          if (kasa / 10 > 0)
          {
                     kasa -= 10;
                     d++;
                     continue;
          }
          if (kasa / 5 > 0)
          {
                     kasa -= 5;
                     e++;
                     continue;
          }
          if (kasa / 2 > 0)
          {
                     kasa -= 2;
                     f++;
                     continue;
          }
          if (kasa < 10)
          {
                   kasa -= 1;
                   g++;
                   continue;
          }
    }
    
    if(a > 0) cout << "100 -> " << a << endl;
    if(b > 0) cout << "50 -> " << b << endl;
    if(c > 0) cout << "20 -> " << c << endl;
    if(d > 0) cout << "10 -> " << d << endl;
    if(e > 0) cout << "5 -> " << e << endl;
    if(f > 0) cout << "2 -> " << f << endl;
    if(g > 0) cout << "1 -> " << g;
    
    cin.get();
    cin.get();
    
    return 0;
}
