#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int i, n;
    unsigned long f1 = 0, f2 = 1;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        
        if(i%2 == 0)
        {
            f1 +=f2;
            
        }
        else
        {
            f2 += f1;
            
        }
    }

    
    if(n == 1)
    {
        cout << f1 << endl;
    }
    
    else if(n%2 == 0)
    {
        cout << f1 << endl;
    }

    else
    {
        cout << f2 << endl;
    }
}