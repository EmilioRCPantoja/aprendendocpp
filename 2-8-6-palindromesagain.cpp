#include <iostream>

using namespace std;

int main(void) {

	int vector[] = {1, 7, 3, 8, 3, 9, 1};
	bool ispalindrome = true;
	int n = sizeof(vector) / sizeof(vector[0]);

	for(int i = 0; i < 3; i++)
    {
        if(vector[i] != vector[6-i])
        {
            ispalindrome = false;
            break;
        }
    }

	if(ispalindrome)
		cout << "It's a palindrome";
	else
		cout << "It isn't a palindrome";
	cout << endl;
	return 0;
}