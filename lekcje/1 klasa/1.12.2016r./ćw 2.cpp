#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    system("chcp 1250");
    system("color F");
    system("cls");
    int i=4;
    
    do
    {
        cout << "*";
        i--;
    }
    while (i);
    
    cin.ignore();
    getchar();
    return 0;
}
