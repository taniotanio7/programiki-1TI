#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

double silnia(int n)
{
 if (n==0) return 1;
 else return silnia(n-1)*n;
}

int fibonacci(int n)
{
if(n<2)    return 1;
else return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
 setlocale(LC_ALL, "");
 system("cls");
    int n=1, s=1;
    cout<<"podaj liczbe: ";
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        s=s*i;
        }
        cout<<"Silnia: "<<s<<endl;

cout<<"Silnia obliczona w funkcji rekurencyjnej: "<<silnia(n)<<endl;

cout<<"Ci¹g fibonacciego obliczony w funkcji rekurencyjnej: "<<silnia(n)<<endl;


cin.ignore();
getchar();
return 0;    
}
