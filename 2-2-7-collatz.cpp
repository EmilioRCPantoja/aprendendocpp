#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int c0 = 0, cont = 0;

    cin >> c0;

    while(c0 > 1)
    {
        if(c0 % 2 != 0)
        {
            c0 = 3 * c0 + 1;
        }
        else
        {
            c0 = c0 / 2;
        }
        cout << c0 << endl;
        cont++;
    }

    cout << "steps: " << cont << endl;

}