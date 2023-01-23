 #include <iostream> // <> oznaczanie ¿e szukaj tej biblioteki w folderze Code Blocks
 #include "pytanie.h" //"" cudzys³ów oznacza szukaj biblioteki w folderze z projektem
 #include <fstream> // aby muc korzystaæ z pliku tekstowego
 #include <cstdlib> //biblioteka aby u¿yæ opcji exit
 #include <string.h>
 #include <algorithm>

using namespace std;


 void Pytanie::wczytaj() //wczytuje metode bêd¹c¹ czêœci¹ klasy pytanie(Pytanie - klasa, wczytaj- nazwa metody)
 //:: - podwójny dwukropek to operator zasiêgu, mówi do której kasy nale¿y ta funkcja
 {
    fstream plik;//zmienna plikowa
    plik.open("quiz.txt", ios::in);// otwieramy plik ze œcie¿k¹ do pliku (ios::in - tryb otwarcia pliku)

    if(plik.good()==false)
    {
        cout<<"Nie udalo siê otworzyc pliku";
        exit(0);
    }
    int nr_linii=(nr_pytania-1)*6+1;
    int aktualny_nr=1;
    string linia;


    //pętla czytająca pliki tekstowe
    while(getline(plik, linia)) //pętla sama się przewie gdy nie będzie już lini do odczytania w pliku
    {
        if(aktualny_nr==nr_linii) tresc=linia;
        if(aktualny_nr==nr_linii+1) a=linia;
        if(aktualny_nr==nr_linii+2) b=linia;
        if(aktualny_nr==nr_linii+3) c=linia;
        if(aktualny_nr==nr_linii+4) d=linia;
        if(aktualny_nr==nr_linii+5) poprawna=linia;
        aktualny_nr++;
    }
    plik.close(); //zamykanie otwartego pliku
 }
    void Pytanie::zadaj() //pokazuje pytania, czyta odpowiedŸ
    {
    cout<<endl<<tresc<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<"-----------------------"<<endl;
    cout<<endl<<"Odpowiedz: ";
    cin>>odpowiedz;
        }
    void Pytanie::sprawdz() //sprawdza poprawnoœæ odpowiedzi
    {

        transform(odpowiedz.begin(), odpowiedz.end(), odpowiedz.begin(), ::tolower); //zmiana na małe litery odpowiedzi
        if(odpowiedz==poprawna)
        {
            punkt=1;
        }
        else punkt=0;
    }
