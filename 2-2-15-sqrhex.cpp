#include<iostream>
#include<iomanip> 

using namespace std;

int main()
{
    long n;

    cin >> n;

    --n;
    n = n * n;
    n++;
    cout << n << endl;
}