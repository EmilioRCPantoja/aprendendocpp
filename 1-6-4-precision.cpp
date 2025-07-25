#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float v1 = 2.3, v2 = 2.123456;

    cout << setprecision(2) << v1 << endl;
    cout << setprecision(2) << fixed << v1 << endl;
    cout << setprecision(6) << v2 << endl;
    cout << setprecision(2) << v2 << endl;
    cout << setprecision(0) << v2 << endl;

}