#include <iostream>
using namespace std;

int main() {
	unsigned long n, mask = 1;
	int cont = 0;
	
	cout << "enter a number :";
	cin >> n;
	
	for(int i = 0; i<32; i++)
	{
	    if(n&mask)
	    {
	        cont+=1;
	        
	    }
	    mask<<=1;
	}
	cout << cont << endl;
	
	return 0;
}