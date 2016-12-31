#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
  int n,i = 1;
  cout << "Podaj n (ilość wierszy): ";
  cin >> n;

  while(i<=n)
  {
    for(int i2 = 1; i2<=i; i2++)
    {
      cout << i*i2 << " ";
    }
    cout << endl;
    i++;
  }

  cin.get();
  getchar();
  return 0;
}
