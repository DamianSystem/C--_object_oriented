#include <iostream>

using namespace std;
class Zwierze //stworzenie w�asnej klasy Z du�ej litery nazwa klasy (dobre praktki)
{
    public:// daje mo�liwo�� dot�p wszystkim funkcjom do zmienych w class w tym r�wnie� main

    //atrybuty
    string marka;
    string model;
    int rocznik;
    int przebieg;
    //metody (funkcje i procedury wewn�trz klas

    void wczytaj()//procedura wczytania zmiennych z klawiatury
    {
        cout<<"DODAWANIE NOWEGO SAMOCHODU DO BAZY: "<<endl;
        cout<<"Podaj mark�: ";//wy�wietlanie
        cin>>marka; //wczytywanie zmiennej
        cout<<"Podaj model: ";//wy�wietlanie
        cin>>model; //wczytywanie zmiennej
        cout<<"Podaj rocznik: ";//wy�wietlanie
        cin>>rocznik; //wczytywanie zmiennej
        cout<<"Podaj przebieg: ";//wy�wietlanie
        cin>>przebieg; //wczytywanie zmiennej
    }
    void wypisz()
    {
        cout<<"Samoch�d marki: "<<marka<<" model :"<<model<<" rocznik: "<<rocznik<<" o przebiegu :"<<przebieg<<" robi brum!!";
    }
}; //klasa ma ko�cu klamry �rednik

int main()
{
    Zwierze s1; // klasa wierze obiekt z1
    s1.wczytaj(); //wywo�anie funkcji dla obiektu z1
    s1.wypisz(); //(.) (kropka w nawiasach) w podpowiedzi oznacza metod� czyli funkcj� w klasie, .(kropka) w podpowiedzi oznacza atrybut, zmiann� w klasie

    Zwierze s2;
    s2.wczytaj(); //wywo�anie funkcji dla obiektu z1
    s2.wypisz();

    return 0;
}
