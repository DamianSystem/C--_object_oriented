#include <iostream>
#include <math.h>
using namespace std;

class Punkt
{
    float x,y;
    string nazwa;

public:
    void wyswietl()
    {
        cout<<nazwa<<"("<<x<<","<<y<<")"<<endl;

    }
    Punkt(string n="S", float a=0, float b=0) // konstruktor
    {
       nazwa = n;
        x = a;
        y = b;

    }
};

class Kolo :public Punkt // kasa ko�o dziedziczy publicznie z klasy punkt
{
protected:
    float r; //dopisana warto�� promienia opr�cz dziedziczonej funkcji punkt
    string nazwa; //przes�oni�cie nazwy punktu od rodzica
public:
    void wyswietl()
    {
        cout<<"kolo o nazwie: "<<nazwa<<endl;
        cout<<"Srodek kola: "<<endl;
        Punkt::wyswietl(); //wywolanie u rodzica matody wyswietl
        cout<<"Promien: "<<r<<endl;
        cout<<"Pole kola :"<<M_PI*r*r<<endl;
        //M_PI - sta�a pi w c++ do�� dok�adna
    }
    Kolo(string nk = "kolo", string np="S", float a=0, float b=0, float pr=1)
    :Punkt(np,a ,b) //wywo�anie konstruktora punkt - lista inicjalizacyjna
    {

        nazwa = nk;

        r=  pr;
    }
};

class Kula :public Kolo
{


    string nazwa; //przes�oni�cie nazwy punktu od rodzica
public:
    void wyswietl()
    {
        cout<<"kula o nazwie: "<<nazwa<<endl;
        cout<<"Srodek kuli: "<<endl;
        Punkt::wyswietl();
        Kolo::wyswietl(); //wywolanie u rodzica matody wyswietl
        cout<<"Promien: "<<r<<endl;
        cout<<"Objetosc kuli :"<<M_PI*r*r<<endl;
        //M_PI - sta�a pi w c++ do�� dok�adna
    }
    Kula(string nkuli = "Kula", string nkola="Kolo", string npunkt="S", float a=0, float b=0, float pr=1)
    :Kolo(nkola,npunkt, a ,b, pr)
    {
        nazwa = nkuli;

    }
};

int main()
{
    Kula k1;
    k1.wyswietl();
    return 0;
}
