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

int daysBetween(Date d1, Date d2) {

	// Insert you code here
    

    int cont = 0;

    if(d1.year > d2.year && d1.month > d2.month && d1.day > d2.day)
    {
        return -1;
    }
    
    while( d1.year < d2.year || (d1.year == d2.year && d1.month < d2.month) || (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day) )
    {
        
        d1.day++;
        cont++;
        
        if(d1.day > monthLength(d1.year, d1.month))
        {
            d1.day = 1;
            d1.month++;
            
        }
        if(d1.month>12)
        {
            d1.month = 1;
            d1.year++;
        }
    
    }
    
    return cont;

}

int main(void) {

	Date since,to;
	cout << "Enter first date (y m d): ";
	cin >> since.year >> since.month >> since.day;
	cout << "Enter second date (y m d): ";
	cin >> to.year >> to.month >> to.day;
	cout << daysBetween(since,to) << endl;
	return 0;
}