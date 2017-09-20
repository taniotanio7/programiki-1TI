#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    system("chcp 1250");
    system("cls");
    int i=100;

    while (i>=5)
    {
          cout << i << " ";
          i--;
}

    cin.ignore();
    getchar();
    return 0;
}
