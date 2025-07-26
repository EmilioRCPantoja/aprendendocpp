#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int year;

    cin >> year;

    if(year % 4 != 0 || year % 100 != 0 || year % 400 == 0)
    {
        cout << "Leap year" << endl;
    }
    else
    {
        cout << "Common year" << endl;
    }
}