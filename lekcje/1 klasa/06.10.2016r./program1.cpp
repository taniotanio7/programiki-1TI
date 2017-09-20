/* Dyrektywa preprocesora "include" zapoznaje kompilator z nag��wkiem odpowiedniej biblioteki
(aby kompilator m�g� sprawdzi� sk�adni� programu) i informuje preprocesor , �e program u�ywa procedur podanej biblioteki.
Preprocesor - to program, kt�ry dokonuje wst�pnej obr�bki kodu �r�d�owego przed kompilacj�. */
#include <iostream>       // iostream pozwala na wyj./wej.
#include <cstdio>         // m.in pozwala na "getchar".
using namespace std;      // - przestrze� nazw, u�atwia dost�p do ca�ej bilbioteki standardu C++, kt�re jest w niej zadeklarowane.
 int main ()              // - funkcja g��wna programu (bez paramatr�w). Ka�dy program musi zawiera� funkcj� o tej nazwie. (nie ma �rednika)
 {                        // - tre�� funkcji umieszcza si� w {nawiasach klamrowych}, musi zosta� zamkni�ta.
     cout<<"WITAJ !!!";   // "<<" operator wyj�cia / ">>" wyj�cia | "cout" - identyfikator standardowego wyj�cia / "cin" - wej�cia (�rednik na ko�cu).
 //getchar();             // - funkcja "getchar" wypisuj�ca na ekran znak wpisany na klawiaturze , a� do wsci�ni�cia ENTER. 
 system ("PAUSE");
 //return 0;              // - funkcja "main" (g��wna) ko�czy prac� z warto�ci� 0, "return 0" informuje �e program zako�czy� prac� pomy�lnie.
 return EXIT_SUCCESS;
}
