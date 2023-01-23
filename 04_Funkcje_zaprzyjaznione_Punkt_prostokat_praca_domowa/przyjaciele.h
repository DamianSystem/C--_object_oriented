#include <iostream>

using namespace std;

class Prostokat; //Uwaga aby friend sedzia zadzia³a³ w class punkt definiuje wczeœniej pust¹ klase Prostok¹t
class Punkt
{

    string nazwa;
    float x,y;

    public:
    Punkt(string="A",float =0, float=0);
    void wczytaj();
    friend class Prostokat;
    // wpisanie przyjaciela (friend) do odczytu danych
};


class Prostokat
{

    string nazwa;
    float x,y,szerokosc,wysokosc;
public:
    Prostokat(string="brak",float =0, float=0, float=1,float=1);
    void wczytaj();// powinien byæ mechanizm kontroli b³êdów
    void sedzia(Punkt pkt,  Prostokat p);





};

