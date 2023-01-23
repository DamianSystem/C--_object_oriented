#include <iostream>
#include "przyjaciele.h"
using namespace std;


int main()
{
    Punkt pkt1("A", 3, 17); // na czs testów dajemy na sta³e wartoœci
    //pkt1.wczytaj()

    Prostokat p1("Duzy prostokat ",0,0,6,4);
    //p1.wczytaj();

    p1.sedzia(pkt1, p1);
    p1.wczytaj();//test czy dzia³amy na orginalnych danych

    return 0;
}
