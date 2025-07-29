#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
	double pi4 = 0.;
	long   n, flg = 0, i;

	cout << "Number of iterations? ";
	cin >> n;

    for(i = 1; i <= n; i+=2)
    {
        if(flg == 0)
        {
            pi4 += 1.0/i;
            flg = 1;
        }
        else
        {
            pi4 -= 1.0/i;
            flg = 0;
        }
    }


	cout << "Pi = " << setprecision(20) << (pi4 * 4.) << endl;
	return 0;
}