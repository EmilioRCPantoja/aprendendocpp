#include<iostream>

using namespace std;

struct TIME{
    int hour, min;
};


int main()
{
    int event;
    TIME clock;

    cin >> clock.hour;
    cin >> clock.min;
    cin >> event;

    if (event < 0)
    {
        event = -event;
    }

    clock.min += event;
    
    clock.hour += clock.min / 60;

    clock.min = clock.min % 60;

    while(clock.hour >= 24)
    {
        event = clock.hour / 24;
        event *= 24;
        clock.hour -=  event;
    }

    cout << clock.hour << ":" << clock.min << endl;

}