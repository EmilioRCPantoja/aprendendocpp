#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    unsigned long n, pow2 = 1, i;

    cin >> n;
    for(i = 1; i <= n; i++)
    {
        pow2 *=2;
    } 

    cout << pow2 << endl;
}