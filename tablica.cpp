#include "tablica.h"

using namespace std;

void Gra::Rysuj()
{
    system ("cls");
    cout<<"Witaj w grze w kolko i krzyzyk"<<endl;
    cout<<"----+---+----"<<endl;

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<<"|";
            if (tb[i][j]==-1) cout<<" X ";
            else if (tb[i][j]==1) cout<<" O ";
            else cout<<" "<<i*3+j+1<<" ";
        }
        cout<<"|"<<endl;
        cout<<"----+---+----"<<endl;
    }
}

void Gra::Sprawdz()
{
    if (NumerRuchu==10)
    {
        remis();
        exit(0);
    }
    else if (tb[0][0]+tb[0][1]+tb[0][2]==3)
    {
        zwyciezcaO();
        exit(0);
    }
    else if (tb[0][0]+tb[0][1]+tb[0][2]==-3)
    {
        zwyciezcaX();
        exit(0);
    }
    else if (tb[1][0]+tb[1][1]+tb[1][2]==3)
    {
        zwyciezcaO();
        exit(0);
    }
    else if (tb[1][0]+tb[1][1]+tb[1][2]==-3)
    {
        zwyciezcaX();
        exit(0);
    }
    else if (tb[2][0]+tb[2][1]+tb[2][2]==3)
    {
        zwyciezcaO();
        exit(0);
    }
    else if (tb[2][0]+tb[2][1]+tb[2][2]==-3)
    {
        zwyciezcaX();
        exit(0);
    }
    else if (tb[0][0]+tb[1][0]+tb[2][0]==3)
    {
        zwyciezcaO();
        exit(0);
    }
    else if (tb[0][0]+tb[1][0]+tb[2][0]==-3)
    {
        zwyciezcaX();
        exit(0);
    }
    else if (tb[0][1]+tb[1][1]+tb[2][1]==3)
    {
        zwyciezcaO();
        exit(0);
    }
    else if (tb[0][1]+tb[1][1]+tb[2][1]==-3)
    {
        zwyciezcaX();
        exit(0);
    }
    else if (tb[0][2]+tb[1][2]+tb[2][2]==3)
    {
        zwyciezcaO();
        exit(0);
    }
    else if (tb[0][2]+tb[1][2]+tb[2][2]==-3)
    {
        zwyciezcaX();
        exit(0);
    }
    else if (tb[2][0]+tb[1][1]+tb[0][2]==3)
    {
        zwyciezcaO();
        exit(0);
    }
    else if (tb[2][0]+tb[1][1]+tb[0][2]==-3)
    {
        zwyciezcaX();
        exit(0);
    }
    else if (tb[0][0]+tb[1][1]+tb[2][2]==3)
    {
        zwyciezcaO();
        exit(0);
    }
    else if (tb[0][0]+tb[1][1]+tb[2][2]==-3)
    {
        zwyciezcaX();
        exit(0);
    }
}

bool Gra::Ruch()
{
    if (NumerRuchu==1)
    {
        srand(time(NULL));
        gracz=rand()%2;
        if (gracz==0)
        {
            cout<<"Gre rozpoczyna gracz O"<<endl;
        }
        else cout<<"Gre rozpoczyna gracz X"<<endl;
    }
    int NumerPola;
    if (gracz==0)
    {
        cout<<"Tura gracza O. Podaj numer pola: ";
        cin>>NumerPola;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"Wprowadzono bledny znak. Sprobuj jeszcze raz: ";
            cin>>NumerPola;
        }
        while ((NumerPola<1)||(NumerPola>9))
        {
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(1000,'\n');
                cout<<"Wprowadzono bledny znak. Sprobuj jeszcze raz: ";
                cin>>NumerPola;
            }
            cout<<"Podaj liczbe z zakresu 1 do 9 oznaczajaca numer pola: ";
            cin>>NumerPola;
        }
        while ((tb[NumerPola/3][NumerPola%3-1])!=0)
        {
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(1000,'\n');
                cout<<"Wprowadzono bledny znak. Sprobuj jeszcze raz: ";
                cin>>NumerPola;
            }
            cout<<"Pole zajete. Wybierz inne pole: ";
            cin>>NumerPola;
        }
        tb[NumerPola/3][NumerPola%3-1]=1;
        NumerRuchu++;
        gracz++;
        return true;
    }
    else
    {
        cout<<"Tura gracza X. Podaj numer pola: ";
        cin>>NumerPola;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"Wprowadzono bledny znak. Sprobuj jeszcze raz: ";
            cin>>NumerPola;
        }
        while ((NumerPola<1)||(NumerPola>9))
        {
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(1000,'\n');
                cout<<"Wprowadzono bledny znak. Sprobuj jeszcze raz: ";
                cin>>NumerPola;
            }
            cout<<"Podaj liczbe z zakresu 1 do 9 oznaczajaca numer pola: ";
            cin>>NumerPola;
        }
        while ((tb[NumerPola/3][NumerPola%3-1])!=0)
        {
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(1000,'\n');
                cout<<"Wprowadzono bledny znak. Sprobuj jeszcze raz: ";
                cin>>NumerPola;
            }
            cout<<"Pole zajete. Wybierz inne pole: ";
            cin>>NumerPola;
        }
        tb[NumerPola/3][NumerPola%3-1]=-1;
        NumerRuchu++;
        gracz--;
        return true;
    }
}
















