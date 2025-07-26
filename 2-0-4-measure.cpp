#include<iostream>
#include<iomanip>
#include<string.h>
#include<cmath>

using namespace std;

int main() 
{
    char str[10], sys[] = "metric";
    int cmpr;
    double m, ft, inc; 

    cin >> str;

    if(strcmp(str,sys) == 0)
    {
        cout << "Enter the metric value: ";
        cin >> m;

        inc = m * 39.3701;
        ft = (int) inc / 12;
        inc = fmod(inc, 12);

        cout << ft << "'" << setprecision(5) << inc << "\"" << endl;

    }
    else
    {
        cout << "Enter the imperial value:" << endl;
        cin >> ft;
        cin >> inc;

        inc += ft * 12;
        m = inc / 39.37;

        cout << m << "m" << endl;

    }

    

}