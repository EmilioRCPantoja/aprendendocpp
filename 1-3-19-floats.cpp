#include <iostream>

using namespace std;

int main(void) {
	float pi = 3.14159265359;
	float x,y;

	cout << "Enter value for x: ";
	cin >> x;

	y =  (x * x / (pi * pi * (x * x + 0.5))) * (1 + (x * x / (pi * pi * ((x * x * x * x )- (2 * x * x * 0.5) + 0.25))));
	
	cout << "y = " << y;
	return 0;
}