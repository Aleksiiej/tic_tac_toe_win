#pragma once
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <cstdio>

using namespace std;

class Gra
{
    private:

    int tb[3][3]={{},{},{}};
    int NumerRuchu=1;
    int gracz;

    public:

    void Rysuj();
    void Sprawdz();
    bool Ruch();
    void zwyciezcaX()
    {
        cout<<"Wygrywa gracz X"<<endl;
        cout<<"Aby wyjsc nacisnij i zatwierdz enterem dowolny klawisz"<<endl;
        int numb;
        cin>>numb;
    };
    void zwyciezcaO()
    {
        cout<<"Wygrywa gracz O"<<endl;
        cout<<"Aby wyjsc nacisnij i zatwierdz enterem dowolny klawisz"<<endl;
        int numb;
        cin>>numb;
    };
    void remis()
    {
        cout<<"Gra zakonczyla sie remisem!"<<endl;
        cout<<"Aby wyjsc nacisnij i zatwierdz enterem dowolny klawisz"<<endl;
        getchar();
        int numb;
        cin>>numb;
    };
};

