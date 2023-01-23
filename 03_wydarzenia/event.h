#include <iostream>

using namespace std;

class Event

{
    private: //zabespieczenie

    int day, month, year;
    int hour, minutes;
    string name;

    public: //udostêpnione

    //Event(string, int, int, int, int, int); //konstruktor
    Event(string="brak", int=1, int=1, int=2015, int=12, int=0); //konstruktor przypisujace wartosci domyslne
    /*
    uwaga konstruktor Event(string, int, int, int, int, int)
    zastêpuje nam:
    Event(string, int, int, int, int, int);
    Event(string, int, int, int, int);
    Event(string, int, int, int);
    Event(string, int, int);
    Event(string, int);
    Event(string);
    Event();
    */
    ~Event(); //destruktor
    void load();
    void show();
};
