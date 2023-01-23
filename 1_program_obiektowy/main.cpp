#include <iostream>

using namespace std;
class Zwierze //stworzenie w³asnej klasy Z du¿ej litery nazwa klasy (dobre praktki)
{
    public:// daje mo¿liwoœæ dotêp wszystkim funkcjom do zmienych w class w tym równie¿ main

    //atrybuty
    string marka;
    string model;
    int rocznik;
    int przebieg;
    //metody (funkcje i procedury wewn¹trz klas

    void wczytaj()//procedura wczytania zmiennych z klawiatury
    {
        cout<<"DODAWANIE NOWEGO SAMOCHODU DO BAZY: "<<endl;
        cout<<"Podaj markê: ";//wyœwietlanie
        cin>>marka; //wczytywanie zmiennej
        cout<<"Podaj model: ";//wyœwietlanie
        cin>>model; //wczytywanie zmiennej
        cout<<"Podaj rocznik: ";//wyœwietlanie
        cin>>rocznik; //wczytywanie zmiennej
        cout<<"Podaj przebieg: ";//wyœwietlanie
        cin>>przebieg; //wczytywanie zmiennej
    }
    void wypisz()
    {
        cout<<"Samochód marki: "<<marka<<" model :"<<model<<" rocznik: "<<rocznik<<" o przebiegu :"<<przebieg<<" robi brum!!";
    }
}; //klasa ma koñcu klamry œrednik

int main()
{
    Zwierze s1; // klasa wierze obiekt z1
    s1.wczytaj(); //wywo³anie funkcji dla obiektu z1
    s1.wypisz(); //(.) (kropka w nawiasach) w podpowiedzi oznacza metodê czyli funkcjê w klasie, .(kropka) w podpowiedzi oznacza atrybut, zmiann¹ w klasie

    Zwierze s2;
    s2.wczytaj(); //wywo³anie funkcji dla obiektu z1
    s2.wypisz();

    return 0;
}
