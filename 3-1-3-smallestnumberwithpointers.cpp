#include<iostream>

using namespace std;

int main() {

    int *ptr, aux  = 0;
	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
	int n = sizeof(vector) / sizeof(vector[0]);

    ptr = vector;

    aux = *ptr;

    ptr++;

    for(int i = 1; i < n; i++)
    {
        if(*ptr<aux)
        {
            aux = *ptr;
        }
        ptr++;
    }

    cout << aux << endl;

}