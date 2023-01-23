#include <iostream>
#include "przyjaciele.h"
using namespace std;


void sedzia(Punkt &pkt, Prostokat &p)//wywo³anie klas w funkcji
//sprawdzenie czy punkt jest w prostokacie
/*Dla kopi uda³o siê zmieniæ nazwê na PODMIANA
 Ale po zakoñczeniu funkcji w orginalnym obiekcie pozosta³a stara nazwa:prostokat
 Wniosek: pracowaliœmy na kopii oryginalnego obiektu!
 & symbol ampersanda do zmiany orygina³ów zmiennych w class w wywo³ywanej funkcji zaprzyjaŸnionej
 */
{
    p.nazwa="PODMIANA";//test czy dzia³amy na orginalnych danych
    cout << &(p.nazwa); //- sprawdzenie miejsca w pamięci
    if ((pkt.x>=p.x)&&(pkt.x<=p.x+p.szerokosc)
        &&(pkt.y>=p.y)&&(pkt.y<=p.y+p.wysokosc))
    cout<<endl<<"Punkt "<<pkt.nazwa<<" nalezy do prostokata: "<<p.nazwa;

    else

    cout<<endl<<"Punkt "<<pkt.nazwa<<" lezy POZA prostokatem: "<<p.nazwa;
}





int main()
{
    Punkt pkt1("A", 3, 17); // na czs testów dajemy na sta³e wartoœci
    //pkt1.wczytaj()

    Prostokat p1("Duzy prostokat ",0,0,6,4);
    //p1.wczytaj();

    sedzia(pkt1,p1);
    p1.wczytaj();//test czy dzia³amy na orginalnych danych
    cout << &(p1.nazwa);// - sprawdzenie miejsca w pamięci
    return 0;
}
