#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void increment(int &v1, int v2 = 1)
{
    v1 += v2;
}

void increment(float &v1, float v2 =1)
{
	v1 += v2;
}

int main() {

	int intvar = 0;
	float floatvar = 1.5;

	for(int i = 0; i < 10; i++)
		if(i % 2) {
			increment(intvar);
			increment(floatvar, sqrt(intvar));
		}
		else {
			increment(intvar,i);
			increment(floatvar);
		}
	cout << intvar * floatvar << endl;
	return 0;
}