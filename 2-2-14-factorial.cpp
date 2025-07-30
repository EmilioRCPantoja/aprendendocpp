#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    long n, i = 1, fac = 1 ;
    

    cin >> n;

    if(n == 0 || n == 1)
    {
        n = 1;
    }
    else
    {
        for(i = 1; i <= n; i++)
        {
            fac*=i;
        }
    }

    cout << fac << endl;
}