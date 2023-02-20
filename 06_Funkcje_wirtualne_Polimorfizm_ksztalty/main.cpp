#include <iostream>

using namespace std;

class Ksztalt
{
public:
    virtual void oblicz_pole()=0;
    //czysta funkcja wirtualna
};
///////////////////////////////////////////////

class Kolo:public Ksztalt
{
    float r;
public:
    Kolo(float x) //konstruktor
    {
        r=x;
    }
    virtual void oblicz_pole()// nie koniecznie musimy wstawiaæ klauzure virtual
    {
       cout<<"Pole kola: "<<3.14*r*r<<endl;
    }
};
class Kwadrat:public Ksztalt
{
    float a;
public:
    Kwadrat(float x) //konstruktor
    {
        a=x;
    }
    virtual void oblicz_pole()// nie koniecznie musimy wstawiaæ klauzure virtual
    {
       cout<<"Pole kwadratu: "<<a*a<<endl;
    }
};
////////////////////////////////////////////////

void obliczenia(Ksztalt *x) //funkcja obliczenia ktora zmienia sie w zaleznosci jaki obiekt jej wyslemy
{
    x -> oblicz_pole();
}

int main()
{
    Kolo k(1); //tworzenie obiektow kola o promieniu 1
    Kwadrat kw(2); //tworzenie obiektow kwadratu o promieniu 2

    Ksztalt *wsk;//u¿ycie wskaznika wsk
    wsk = &k; //posy³¹m ampersant (adres  obiektu k) z pamieci komputera
    wsk -> oblicz_pole(); //wywolanie obliczenia pola kola

    wsk = &kw; //posy³¹m ampersant (adres  obiektu k) z pamieci komputera
    wsk -> oblicz_pole(); //wywolanie obliczenia pola kwadratu

    obliczenia(wsk); //implementacja polimorfizmu w kodzie

    return 0;
}
