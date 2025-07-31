#include<iostream>

using namespace std;

int main()
{
    int i, notes[] = {50, 20, 10, 5, 1}, amount, qntd;

    cin >> amount;

    for(i = 0; i<5; i++)
    {

        qntd = amount / notes[i];
        amount = amount % notes[i];
        while(qntd > 0)
        {
            cout << notes[i]<< " ";
            qntd --;
        }
    }

    cout << endl;

}