#include <iostream>
#include"event.h"

//u�ycie konstruktora i destruktora

using namespace std;

int main()
{
    Event w1("Apokalipsa zombi"); //konstruktor z wpisan� jedn� dan� od lewej wpisuje argumenty z reszt� domy�ln�
    //trzeba inicjowac wszystkie poprzednie argumenty do danego (licz�� od lewej) - dlatego uk�adamy rozs�dnie argumenty (najcz�ciej zminiane po lewej stronie)
    //Event w1; //konstruktor przypisujace wartosci domyslne wywolanie standardowe
    //Event w1("Apokalipsa Zombi",6,8,2045,8,15); //przypisanie wartosci domy�lnych
    //tu nast�pi wywo�anie konstruktora
    w1.show();
    //w1.load();
    //w1.day=1; w1.month=5; w1.year=2014; //itd... - podej�cie ma�o wydajne




    return 0;
}
