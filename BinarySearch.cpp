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

void binarySearch()
{
    cout << "Masukan element yang ingin dicari=  ";
    cin >> x;                // step 1
    int low = 0;             // step 2
    int high = nPanjang - 1; // step 3
    do
    {
        int mid = (low + high) / 2; // step 4
        if (element[mid] == x)
        {                                                  // step 5
            cout << x << "Ditemukan pada index" << mid << endl; // step 5a
            return;                                        // step 5b
        }
        if (x < element[mid])
        {                   // step 6
            high = mid - 1; // step 6a
        }
        if (x > element[mid])
        {                  // step 7
            low = mid + 1; // step 7a
        }
        if (low <= high)
        {
        }
    } while (low <= high); // step 8
    if (low > high)
    {
        cout << x << "Tidak ditemukan" << endl; // step 9
    }
}