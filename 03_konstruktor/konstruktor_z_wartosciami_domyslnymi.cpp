
#include <iostream>

using namespace std;

class Przycisk
{
    private:
    int szerokosc;
    int wysokosc;
    string napis;

    public:

   // void wczytaj(string n, int s, int w) //metoda 1
   Przycisk (string n = "OK", int s = 100, int w = 25) //konstruktor z wartościami domyślnymi
   //uwaga nazwa taka sama jak nazwa klasy
    {
     if(n==""||s<=0||w<=0) cout<<"ERROR!";
     else{ napis = n; szerokosc = s; wysokosc = w; cout<<"PRZYCISK!";}

    }
};
int konstruktor_z_wartosciami_domyslnymi()
{
    //Przycisk p1; //metoda 1
    //p1.wczytaj( "OK", 100, 25 ); //metoda 1
    Przycisk p1; //konstruktor z wartościami domyślnymi wywołanie
    cout << "Hello world!" << endl;
    return 0;
}
