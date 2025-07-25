#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float v1, v2;
    float div1, div2, diff;
    cin >> v1;
    cin >> v2;

    div1 = 1 / v1;
    div2 = 1 / v2;

    if(v1 < v2)
    {
        v1 = v2 - v1;
        v2 = v2 - v1;
        v1 = v2 + v1;
    }

    diff = v1 - v2;

    if(diff <= 0.000001)
    {
        cout << "Results are equal (by 0.000001 epsilon)" << endl;
    }
    else
    {
        cout << "Results are not equal (by 0.000001 epsilon)" << endl;
    }

}