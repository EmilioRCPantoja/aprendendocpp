#include<iostream>

using namespace std;

int main()
{
    int n = 0;

    cin >> n;
    
    if((n >= 0 && n < 10) || (((n * 2) < 20) && ((n - 2) > - 2)) || ((n -1 > 1) && ((n/2) < 10)) || n == 11)
    {
        cout << "THAT'S TRUE :)" << endl;
    }
    else
    {
        cout << "THAT'S NOT TRUE :(" << endl;
    }

}