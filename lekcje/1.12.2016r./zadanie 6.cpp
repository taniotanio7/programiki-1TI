#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    int n;
    double i=1;

    cout << "WprowadŸ n (2^n): ";
    cin >> n;
    
    while (i<=n)
    {
          cout << "2^" << i << "= " << pow(2,i) << endl;
          i++;
}

    cin.ignore();
    getchar();
    return 0;
}
