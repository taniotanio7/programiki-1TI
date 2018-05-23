////
//// Created by Jonatan Witoszek on 09.05.2018.
////

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//void swap(int *p, int *q) {
//    int temp = *p;
//    *p = *q;
//    *q = temp;
//}
//
//void bubble_sort(int a[], int n) {
//    for (int i = 1; i < n-1; i++) {
//        bool swapped = false;
//        for (int j = 1; j < n-1; j++) {
//            if (a[j] > a[j+1]) {
////                swap(&a[j], &a[j+1]);
//                int temp = a[j];
//                a[j] = a[j+1];
//                a[j+1] = temp;
//                swapped = true;
//            }
//        }
//        if (swapped == false) {
//            break;
//        }
//    }
//}

int main() {
    setlocale(LC_ALL, "");

    static int N = 5;

    int tablica[N];

    srand(time(NULL));

    for (int i = 0; i<N; i++) {
        tablica[i] = rand() % 10;
    }

    // Sortowanie bąbelkowe

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N-1; j++)
        {
            if(tablica[j]>tablica[j+1])
            {
                int temp=tablica[j];
                tablica[j]=tablica[j+1];
                tablica[j+1]=temp;
            }
        }
    }

    for (int i = 0; i<5; i++) {
        cout << tablica[i] << " ";
    }

    return 0;
}

////Bubble Sort
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    int Array[n];
//    cout<<"\nEnter any 6 Numbers for Unsorted Array : ";
//
//    //Input
//    for(int i=0; i<n; i++)
//    {
//        cin>>Array[i];
//    }
//
//    //Bubble Sorting
//    for(int i=0; i<n; i++)
//    {
//        for(int j=0; j<n-1; j++)
//        {
//            if(Array[j]>Array[j+1])
//            {
//                int temp=Array[j];
//                Array[j]=Array[j+1];
//                Array[j+1]=temp;
//            }
//        }
//    }
//
//    //Output
//    cout<<"\nSorted Array : ";
//    for(int i=0; i<n; i++)
//    {
//        cout<<Array[i]<<"\t";
//    }
//}