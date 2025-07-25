#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int n[4], flg = 0, i = 0;

    while(i<4)
    {
        cin >> n[i];
        if(n[i] > 0 && n[i] < 256 )
        {
            i++;
        }
    }

    cout << "Your ip is:" << endl;
    cout << n[0] << "." << n[1] << "." << n[2] << "." << n[3] << endl;
}