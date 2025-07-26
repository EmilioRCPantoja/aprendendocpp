#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float gross, taxperc, netpri, taxv;

    cin >> gross;
    cin >> taxperc;

    if(gross <= 0.0 || taxperc < 0.0 || taxperc > 100)
    {
        cout << "Input data is incorrect, i can't cauculate it" << endl;
    }
    else
    {
        taxperc = taxperc/100.0;

    netpri = gross /(1.0 + taxperc);
    taxv = gross - netpri;
    
    cout << "Net price: " << netpri << endl << "Tax value: " << taxv << endl;
    }

}