#include <iostream>
#include "przyjaciele.h"
using namespace std;

Punkt::Punkt(string n, float xx, float yy)//konstruktor
{
    nazwa=n;
    x=xx;
    y=yy;
}

void Punkt::wczytaj () // tu powinien znajdowa� si� algorytm do sprawdzenia danych
{

    cout<<"Podaj x: "; cin>>x;
    cout<<"Podaj y: "; cin>>y;
    cout<<"Nazwa punktu: "; cin>>nazwa;
}

Prostokat::Prostokat(string n, float xx, float yy, float s, float w)//n- nazwa; xx, yy - wsp�rz�dne wieszcho�ka; s - szeroko��, w- wysoko��
{
    nazwa=n;
    x=xx;
    y=yy;
    szerokosc = s;
    wysokosc = w;
}
void Prostokat::wczytaj () // tu powinien znajdowa� si� algorytm do sprawdzenia danych
{
    /*cout<<"Podaj x lewego dolnego naroznika: "; cin>>p_x;
    cout<<"Podaj y lewego dolnego naroznika: "; cin>>p_y;
    cout<<"Podaj szerokosc: "; cin>>szerokosc;
    cout<<"Podaj wysokosc: "; cin>>wysokosc;
    cout<<"Podaj nazwe prostokatu: "; cin>>nazwa;*/
    cout<<endl<<"Nazwa obiektu: " <<nazwa;//test czy dzia�amy na orginalnych danych
}
void Prostokat::sedzia(Punkt pkt,  Prostokat p)//wywo�anie klas w funkcji
//sprawdzenie czy punkt jest w prostokacie
/*Dla kopi uda�o si� zmieni� nazw� na PODMIANA
 Ale po zako�czeniu funkcji w orginalnym obiekcie pozosta�a stara nazwa:prostokat
 Wniosek: pracowali�my na kopii oryginalnego obiektu!
 & symbol ampersanda do zmiany orygina��w zmiennych w class w wywo�ywanej funkcji zaprzyja�nionej
 */
{


    if ((pkt.x>=p.x)&&(pkt.x<=p.x+p.szerokosc)
        &&(pkt.y>=p.y)&&(pkt.y<=p.y+p.wysokosc))
    cout<<endl<<"Punkt "<<pkt.nazwa<<" nalezy do prostokata: "<<p.nazwa;

    else

    cout<<endl<<"Punkt "<<pkt.nazwa<<" lezy POZA prostokatem: "<<p.nazwa;
}


