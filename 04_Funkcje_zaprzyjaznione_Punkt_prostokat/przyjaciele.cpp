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

    x=xx;
    y=yy;
    szerokosc = s;
    wysokosc = w;
    nazwa=n;
}
void Prostokat::wczytaj () // tu powinien znajdowa� si� algorytm do sprawdzenia danych
{
    /*cout<<"Podaj x lewego dolnego naroznika: "; cin>>x;
    cout<<"Podaj y lewego dolnego naroznika: "; cin>>y;
    cout<<"Podaj szerokosc: "; cin>>szerokosc;
    cout<<"Podaj wysokosc: "; cin>>wysokosc;
    cout<<"Podaj nazwe prostokatu: "; cin>>nazwa;*/
    cout<<endl<<"Nazwa obiektu: " <<nazwa;//test czy dzia�amy na orginalnych danych
}
