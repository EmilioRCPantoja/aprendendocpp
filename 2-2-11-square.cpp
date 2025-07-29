#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int num, i = 0, j = 0l;

    cin >> num;

    while(i < num)
    {
        if(i == 0)
        {
            cout << "+";
            for(j = 0; j < (num-2); j++)
            {
                cout << "-";
            }

            cout << "+"<<endl;

        }
        else if(i > 0 && i < num-1)
        {
            cout << "|";
            
            for(j = 0; j < (num-2); j++)
            {
                cout<< " ";
            }
            
            cout << "|"<<endl;

        }
        else
        {
            cout <<"+";
            for(j = 0; j < (num-2); j++)
            {
                cout << "-";
            }
            cout << "+" << endl;
        }

        i+=1;

    }

}


#include <iostream>

using namespace std;

int main(void) {
	cout << '+';
	for(int i = 0; i < 4; i++)
		cout << '-';
	cout << '+' << endl;
	for(int i = 0; i < 4; i++) {
		cout << '|';
		for(int j = 0; j < 4; j++)
			cout << ' ';
		cout << '|' << endl;
	}
	cout << '+';
	for(int i = 0; i < 4; i++)
		cout << '-';
	cout << '+' << endl;
	return 0;
}