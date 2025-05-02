#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{ // prosedur input
    while (true)
    {
        cout << "Masukan banyaknya elemen pada array: ";
        cin >> nPanjang;
        if (nPanjang <= 10)
            break;
        else
        {
            cout << "\nArray maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "===================" << endl;
    cout << "Masukan elemen arry" << endl;
    cout << "===================" << endl;

    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << (i + 1) << "=";
        cin >> element[i];
    }
}