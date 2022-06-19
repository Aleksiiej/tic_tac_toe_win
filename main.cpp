#include "tablica.h"

using namespace std;

int main()
{
    Gra rozgrywka;

    while(true)
    {
        rozgrywka.Rysuj();
        rozgrywka.Sprawdz();
        rozgrywka.Ruch();
    }

    return 0;
}
