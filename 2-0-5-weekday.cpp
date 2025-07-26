#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int year, month, dayn, weekd = 0, i;
    const char* week[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};

    cout << "year: ";
    cin >> year;
    cout << "month: ";
    cin >> month;
    cout << "day: ";
    cin >> dayn;

    month = month - 2 ;

    if( month <= 0)
    {
        month += 12;
        --year;
    }

    month = month * 83 / 32;
    month += dayn;
    month += year;
    month += year / 4;
    month -= (year/100);
    month += (year/400);
    weekd = month % 7;

    if(weekd < 0)
    {
        weekd += 7;
    }

    for(i = 0; i < 7; i++)
    {
        if(i == weekd)
        {
            cout << weekd <<  " - " << week[i] << endl ;
        }
    }
}