#include <iostream>

using namespace std;

class Ulamek
{
private: //poni�sze atrybuty s� prywatne
        float licznik;
        float mianownik;

public: //poni�sza metoda kontroli b��d�w
    // zmiana klauzuli na publiczn�, poziom dost�pu
    void wczytaj()
    {
        cin>>liczik;
        cin>>mianownik;

        if(mianownik==0)
        {
            while(mianownik==0)
            {
            cout<<"Mianownik nie moze byc rowny zero!"<<endl;
            cout<<"podaj prawidlowy mianownik: ";
            cin>>mianownik;

            }
         }
    }
};
