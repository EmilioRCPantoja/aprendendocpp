#include <iostream>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

bool isLeap(int year) { 
	// The code you've inserted already
     if(year % 4 != 0)
    {
        return false;
    }
    else if(year % 100 != 0)
    {
        return true;
    }
    else if( year % 400 == 0 )
    {
        return true;
    }
    else
    {
        return false;
    }
}

int monthLength(int year, int month) {
	// The code you've inserted already
    if(isLeap(year))
    {
        int mo[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        return mo[month];
    }
    else
    {
        int mo[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        return mo[month];
    }
}

int dayOfYear(Date date) {

    int cont = 0;

	for(int i = 1; i < date.month; i++)
    {
        cont += monthLength(date.year, i);
    }
   int ml = monthLength(date.year, date.month);

    cont += date.day;

    return cont;
	
}

int main(void) {

	Date d;
	cout << "Enter year, month, day: ";
	cin >> d.year >> d.month >> d.day;
	cout << dayOfYear(d) << endl;
	return 0;
}