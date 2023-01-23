#include <iostream>
#include"event.h"

//u¿ycie konstruktora i destruktora

using namespace std;

int main()
{
    Event w1("Apokalipsa zombi"); //konstruktor z wpisan¹ jedn¹ dan¹ od lewej wpisuje argumenty z reszt¹ domyœln¹
    //trzeba inicjowac wszystkie poprzednie argumenty do danego (licz¹æ od lewej) - dlatego uk³adamy rozs¹dnie argumenty (najczêœciej zminiane po lewej stronie)
    //Event w1; //konstruktor przypisujace wartosci domyslne wywolanie standardowe
    //Event w1("Apokalipsa Zombi",6,8,2045,8,15); //przypisanie wartosci domyœlnych
    //tu nast¹pi wywo³anie konstruktora
    w1.show();
    //w1.load();
    //w1.day=1; w1.month=5; w1.year=2014; //itd... - podejœcie ma³o wydajne




    return 0;
}
