#include <iostream>
using namespace std;

int main() {
	unsigned long n, mask = 1, pn = 0, inverter = 2147483648;
	int cont = 0;
	
	cout << "enter a number :";
	cin >> n;
	
	for(int i = 0; i<32; i++)
	{
	    if(n&mask)
	    {
	        pn += inverter;
	        
	    }
	    mask<<=1;
        inverter<<=1;
	}
	if(n == pn)
    {
        cout << n << " is a bitwise palindrome :)"  << endl;
    }
    else
    {
        cout << n << " isn't a bitwise palindrome :(" << endl;
    }
	
	return 0;
}