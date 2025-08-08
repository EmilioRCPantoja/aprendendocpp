#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {

	for(int i = 2; i < 10 ; i++)
    {
        if(num != i && (num % i == 0))
        {
            return false;
        }
    }
    return true;
}

int main(void) {
	for(int i = 0; i <= 21; i++)
		if(isPrime(i))
			cout << i << " ";
	cout << endl;
	return 0;
}