#include <iostream>
using namespace std;

void start(void);
int max(int[]);
int min(int[]);
void sort_desc(int[]);
void sort_asc(int []);

int main()
{
    start();
    cout << "Podaj 3 liczby:" << endl;
    
    int liczby[3];
    for (int i = 0; i<3; i++)
    {
        cin >> liczby[i];
    }
    
    cout << "Najwiêksza liczba: " << max(liczby) << endl;
    cout << "Najmniejsza liczba: " << min(liczby) << endl;
    cout << "Liczby rosn¹co: ";
    sort_asc(liczby);
    cout << "\nLiczby malej¹co: ";
    sort_desc(liczby);
    
    cin.get();
    cin.get();
    
}

void start(void)
{
     system("chcp 1250");
     system("cls");
}

int max(int liczby[])
{
    int max = 0;
    if (liczby[0] > liczby[1])
    {
     if (liczby[0] > liczby[2]) max = liczby[0];
     else max = liczby[2];
    }
    else
    {
     if (liczby[1] > liczby[2]) max = liczby[1];
     else max = liczby[2];
    }
    return max;
}

int min(int liczby[])
{
    int min = 0;
    if (liczby[0] < liczby[1])
    {
     if (liczby[0] < liczby[2]) min = liczby[0];
     else min = liczby[2];
    }
    else
    {
     if (liczby[1] < liczby[2]) min = liczby[1];
     else min = liczby[2];
    }
    return min;
}

void sort_desc(int liczby[])
{

    if (liczby[0] > liczby[1]) // 0>1
    {
     if (liczby[0] > liczby[2]) // 0>1 & 0>2
     {
      cout << liczby[0];
      if (liczby[1] > liczby[2]) // Sort
      {
       cout << liczby[1];
       cout << liczby[2];
      }
     }
     else // 0>1 && 2>0
     {
      cout << liczby[2];
      cout << liczby[0];
      cout << liczby[1];
     }
    }
    else // 1>0
    {
     if (liczby[1] > liczby[2]) // 1>0 && 1>2
     {
      cout << liczby[1];
      if (liczby[0] > liczby[2]) // 0>2
      {
       cout << liczby[0];
       cout << liczby[2];
      }
      else // 2>0
      {
       cout << liczby[2];
       cout << liczby[0];
      }
     }
    }
}

void sort_asc(int liczby[])
{
    if (liczby[0] > liczby[1]) // 0>1
    {
     if (liczby[0] > liczby[2]) // Najw: 0
     {
      if (liczby[1] > liczby[2]) // 2,1,0
      {
       cout << liczby[2]
            << liczby[1]
            << liczby[0];
      }
      else // 1,2,0
      {
       cout << liczby[1]
            << liczby[2]
            << liczby[0];
      }
     }
     else // Najw: 2
     {
      cout << liczby[1]
           << liczby[0]
           << liczby[2];
     }
    }
    else // 1>0
    {
         if (liczby[2] > liczby[1]) // Najw: 2
         {
          cout << liczby[0]
               << liczby[1]
               << liczby[2];
         }
         else // Najw: 1
         {
              if (liczby[2] > liczby[0])
              {
               cout << liczby[0]
                    << liczby[2]
                    << liczby[1];
              }
              else
              {
               cout << liczby[2]
                    << liczby[0]
                    << liczby[1];
              }
         }       
    }
}

