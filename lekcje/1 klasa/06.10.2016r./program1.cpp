/* Dyrektywa preprocesora "include" zapoznaje kompilator z nag³ówkiem odpowiedniej biblioteki
(aby kompilator móg³ sprawdziæ sk³adniê programu) i informuje preprocesor , ¿e program u¿ywa procedur podanej biblioteki.
Preprocesor - to program, który dokonuje wstêpnej obróbki kodu Ÿród³owego przed kompilacj¹. */
#include <iostream>       // iostream pozwala na wyj./wej.
#include <cstdio>         // m.in pozwala na "getchar".
using namespace std;      // - przestrzeñ nazw, u³atwia dostêp do ca³ej bilbioteki standardu C++, które jest w niej zadeklarowane.
 int main ()              // - funkcja g³ówna programu (bez paramatrów). Ka¿dy program musi zawieraæ funkcjê o tej nazwie. (nie ma œrednika)
 {                        // - treœæ funkcji umieszcza siê w {nawiasach klamrowych}, musi zostaæ zamkniêta.
     cout<<"WITAJ !!!";   // "<<" operator wyjœcia / ">>" wyjœcia | "cout" - identyfikator standardowego wyjœcia / "cin" - wejœcia (œrednik na koñcu).
 //getchar();             // - funkcja "getchar" wypisuj¹ca na ekran znak wpisany na klawiaturze , a¿ do wsciœniêcia ENTER. 
 system ("PAUSE");
 //return 0;              // - funkcja "main" (g³ówna) koñczy pracê z wartoœci¹ 0, "return 0" informuje ¿e program zakoñczy³ pracê pomyœlnie.
 return EXIT_SUCCESS;
}
