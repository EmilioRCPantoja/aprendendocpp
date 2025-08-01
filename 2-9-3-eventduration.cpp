#include<iostream>

using namespace std;

struct TIME
{
    int hInit, minInit,hFin, minFin, hDur, minDur;
};

int main()
{
    TIME clock;
    int cont;

    cout <<"enter the start time: "<< endl; 
    cin >> clock.hInit;
    cin >> clock.minInit;
    cout<< "enter the end time: " << endl;
    cin >> clock. hFin;
    cin >> clock.minFin;

   if(clock.minInit > clock.minFin)
    {
        cont = clock.hFin - clock.hInit;

        cont *= 60;

        cont+= clock.minFin;

        clock.minDur = cont - clock.minInit;

        clock.hDur = clock.hFin - clock.hInit - 1;


    }
    else
    {
        clock.minDur = clock.minFin - clock.minInit;

        clock.hDur = clock.hFin - clock.hInit;
    }

    if(clock.hDur < 0)
    {
        clock.hDur = -clock.hDur;
    }
    if(clock.minDur < 0)
    {
        clock.minDur = -clock.minDur - 60;
    }

    cout << "your event ended in :"<< endl << clock.hDur << ":" << clock.minDur << endl;
}