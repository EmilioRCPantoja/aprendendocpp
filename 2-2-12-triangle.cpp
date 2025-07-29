#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int i, j, out = 0, high;

    cin >> high;

    for(i=0; i <= high ; i++)
    {

        out = high/2;
        if(i == 0)
        {
            for(j = 0; j < high/2; j++)
            {
                cout << " ";
            }

            cout << "*";

            for(j = 0; j < high*2-1; j++)
            {
                cout << " ";
            }

            cout << "*";

            for (j = 0; j < high * 2 - 1; j++ )
            {
                cout << " "; 
            }
            cout << "*"<<endl;
        }
        else if(i>0 && i < high)
        {
            for(j = 0; j < out; j++)
            {
                cout << " ";
            }
            
            cout << "*";
            
            for(j = 0; j < i+1; j++)
            {
                cout << " ";
            }

            cout << "*";
            
            for(j = 0; j < out * 2 - 1; j++)
            {
                cout << " ";
            }

            cout << "*";
            
            for(j = 0; j < i+1; j++)
            {
                cout << " ";
            }

            cout << "*";

            for(j = 0; j < out * 2 - 1; j++)
            {
                cout << " ";
            }

            cout << "*";
            
            for(j = 0; j < i+1; j++)
            {
                cout << " ";
            }

            cout << "*"<< endl;

        }
        else
        {
           for(j = 0; j < high*2; j++)
           {
            cout<<"*";
           } 

           cout << " ";

           for(j = 0; j < high*2; j++)
           {
            cout<<"*";
           } 

           cout << " ";

           for(j = 0; j < high*2; j++)
           {
            cout<<"*"<<endl;
           } 
           
        }

       
        
    }

}