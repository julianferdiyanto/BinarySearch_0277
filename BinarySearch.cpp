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

void bubleshortArray()
{
    int pass = 1; // step 1

    do
    {
        for (int j = 0; j <= nPanjang - 1 - pass; j++)
        { // step 2
            if (element[j] > element[j + 1])
            {
                int temp;
                temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
        pass = pass + 1; // Step 4
        
        cout << "\nPass " << pass - 1 << "= ";
        for (int k = 0; k < nPanjang; k++)
        {
            cout << element[k] << " ";
        }
        cout << endl;
    } while (pass <= nPanjang - 1); // Step 5
}

void display()
{
    cout << endl;
    cout << "================================" << endl;
    cout << "Element Array yang telah disusun" << endl;
    cout << "================================" << endl;
    cout << endl;
    for (int j = 0; j < nPanjang; j++)
    {
        cout << element[j];
        if (j < nPanjang - 1)
        {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;
    
    cout << "Jumlah Pass= " << nPanjang - 1 << endl;
    cout << endl;
    cout << endl;
}