#include <iostream>

using namespace std;

class Klasa
{
public:
    static int ileObiektow;
    Klasa()
    {
        ileObiektow++; //konstruktor
    }
    ~Klasa()
    {
        ileObiektow--; //destruktor
    }
};
int Klasa::ileObiektow=0; //przypisanie wartoœci globalnie

int main()
{

    cout << "Hello world!" << endl;
    return 0;
}
