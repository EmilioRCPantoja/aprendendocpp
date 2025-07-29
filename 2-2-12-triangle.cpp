#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int i, j, k, l, high, in = 1, out = 1, star = 3, beg = 15 ;

    cin >> high;

    for(i=0; i < star; i++)
    {
        for(j=0; j<beg; j++)
        {
            cout << " ";
        }
        cout << "*";
    }
    
    cout << endl;

    beg-=2;

    for(i=1; i < high - 1; i++)
    {
        for(j = 0; j < out; j++)
        {
            cout << " ";
        }
    
        
        for(j = 0; j < star; j++)
        {
            for(k = 0; k < beg; k++)
            {
                cout<< " ";
            }

            cout << "*";

            for(l = 0; l < in; l++)
            {
                cout << " ";
            }

            cout << "*";
            
        }
        cout << endl;
        beg -=2;
        out +=1;
        in +=2;
    }

    for(i = 0; i < out; i++)
    {
        cout << " ";
    }
    for(i = 0; i < star; i++)
    {
        for(k = 0; k < beg; k++)
        {
            cout << " ";
        }
        for(j = 0; j < in + 2; j++)
        {
            cout << "*";
        }

    }

    cout << endl; 
        
}
