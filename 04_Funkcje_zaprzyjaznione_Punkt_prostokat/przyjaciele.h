#include <iostream>

using namespace std;

class Prostokat; //Uwaga aby friend sedzia zadzia³a³ w class punkt definiuje wczeœniej pust¹ klase Prostok¹t
class Punkt
{

    float x,y;
    string nazwa;
public:

    Punkt(string="A",float =0, float=0);
    void wczytaj();

    friend void sedzia(Punkt &pkt, Prostokat &p);// wpisanie przyjaciela (friend) do odczytu danych
};


class Prostokat
{


    float x,y,szerokosc,wysokosc;
public:// - sprawdzenie miejsca w pamięci
    string nazwa;
    Prostokat(string="brak",float =0, float=0, float=1,float=1);
    void wczytaj();// powinien byæ mechanizm kontroli b³êdów

    friend void sedzia(Punkt &pkt, Prostokat &p);// wpisanie przyjaciela (friend) do odczytu danych




};

