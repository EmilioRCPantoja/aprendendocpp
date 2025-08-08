#include <iostream>
#include <ctime>

using namespace std;

struct Date {
	int year;
	int mon;
	int mday;
};

Date today(void) {
    Date todayl;
    
	time_t t = time(NULL);
	tm actualdate = *localtime(&t);
	actualdate.tm_year += 1900;
	actualdate.tm_mon +=1;

	//best way to do the code below ->  Date date = { tl.tm_year+1900, tl.tm_mon+1, tl.tm_mday }; 
    todayl.year = actualdate.tm_year;
	todayl.mon = actualdate.tm_mon;
	todayl.mday = actualdate.tm_mday;
	return todayl;


}

int main(void) {
	Date t = today();
	cout << t.year << "-" << t.mon << "-" << t.mday << endl;
	return 0;
}