#include <iostream>

using namespace std;

class Prostokat; //Uwaga aby friend sedzia zadzia�a� w class punkt definiuje wcze�niej pust� klase Prostok�t
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
    void wczytaj();// powinien by� mechanizm kontroli b��d�w
    void sedzia(Punkt pkt,  Prostokat p);





};

