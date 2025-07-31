#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int op;
    float n1, n2, ans;

    cout << "MENU:" << endl << endl << "0 - exit" << endl << endl << "1 - addition" << endl << endl << "2 - subtraction" << endl << endl;
    cout << "3 - multiplication" << endl << endl << "4 - division" << endl << endl << "Your choice?" << endl;
    
    cin >> op;

    if(op == 0)
    {
        cout << "oh, bye bye :)" << endl;
    }
    else if(op < 0 || op > 4)
    {
        cout << "please, enter a valid number!" << endl;
    }
    else
    {
        cout << "enter your numbers: " << endl;
    
        cin >> n1;
        cin >> n2;

        cout << "your answer is ";
        switch(op)
        {
            case 1: cout << n1 + n2 << endl; break;
            case 2: cout << n1 - n2 << endl; break;
            case 3: cout << n1 * n2 << endl; break;
            case 4: cout << setprecision(2) << fixed << n1 / n2 << endl; break;

        }
    }

}