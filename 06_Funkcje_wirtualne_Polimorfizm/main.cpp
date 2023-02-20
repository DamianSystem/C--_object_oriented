#include <iostream>
10:15 objective
using namespace std;

class Ksztalt - klasa abstrakcyjna, klasa podstawowa
{


 Virtual void rysuj()=0; - ta metoda bêdzie zawsze przes³oniêta ( u rodzica jest przes³oniêta po dziedziczeniu np. przez klase ko³o w metodzie rysuj)
//Virtual void - metoda wirtualna, która nigdy nie bêdzie wykonana , bo bêdzie przys³oniêta przez metode z klasy pochodnej
// dlaego do metody (void) zawsze dopisujemy przedrosttek Virtual (wirtualna)
//virual oznacza dla debugera ¿e ta funkcja nigdy nie zostanie wykonana, bêdzie zastêpowana
//aby nie pisac ciala metody doopisujemy = 0 - czysta funkcja wirtualna
{ //tu zanjduje siê cialo metody virualnej
//poni¿ej przyk³ady które nigdy siê nie wykonaj¹:
; - sam srednik
cout<<"Kocham Jolke!";




}

};
class Kolo - klasa konkretna któr¹ mo¿emy realizowaæ w programie
:public Ksztalt
{
  Virtual void rysuj(); // dopisek Virtual daje inforacjê ¿e ta  metoda przes³ania wy¿ej w chierarchii jak¹œ inn¹.
};
class Kwadrat - klasa konkretna któr¹ mo¿emy realizowaæ w programie
:public Ksztalt
{
    Virtual void rysuj();
};
class Trojkat - klasa konkretna któr¹ mo¿emy realizowaæ w programie
:public Ksztalt
{
    Virtual void rysuj();
};

------------
to nie wiem gdzie:
    {
     kolo k;
    Kwadrat kw;
    Trojkat t;
    Ksztalt*wskaznik = &k; - ustalenie na kolo

wskaznik->rysuj();

    }




int main()
{
    Wiazanie statyczne:
    kolo k; //-wiazanie statyczne
    k.rysuj() //-wiazanie statyczne

    Wiazanie dynamiczne ( puzne wiazanie):
    Ksztalt *wsk;
    wsk=&k; - wskaznik (wsk) mozna przestawiac na obiekt dowolnej klasy pochodnej
    wsk->rysuj();

    W czasie kompilacji nie musi być znany typ obiektu dla wywołań funkcji wirtuanych. W trakcie wykonywania programu wywołanie funkcji wirtualnej jest dopasowywane do odpowiedniej funkcji składowej wywoływanego obiektu.
    Taka sytuacja nazywana jest wiązaniem dynamicznym(późnym wiązaniem)

    Oprogramowanie działające z dostarczonymi wcześniej klasami powinno współpracować z nowymi klasami pochodnymi poprzez zastępowanie funkcji wirtualnych przez metody z nowych klas (łatwa rozszerzalność)

    Mozemy tworzyc uniwersalne metody z wiązaniem dynamicznym, przetwarzajace obiekty wszystkich klas pochodnych od abstrakcyjnej klasy podstawowej

    return 0;
}
