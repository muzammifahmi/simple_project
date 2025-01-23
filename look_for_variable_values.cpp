#include <iostream>
#include <conio.h>
using namespace std;

void line()
{
    for (int i = 0; i < 50; i++)
        cout << "=";
    cout << endl;
}

int x;

void akhir(float data[], int y, float hasil[])
{
    float banyak[100], b = 1;
    int d = 0;
    x = 0;

    for (int i = 0; i < y; i++)
    {
        banyak[i] = 0;
        for (int j = 0; j < y; j++)
        {
            if (data[i] == data[j])
            {
                banyak[i]++;
            }
        }
    }

    for (int i = 0; i < y; i++)
    {
        if (banyak[i] > b)
        {
            b = banyak[i];
        }
    }

    for (int i = 0; i < y; i++)
    {
        if (banyak[i] == b)
        {
            if (x == 0)
            {
                hasil[x] = 0;
            }
            else
            {
                hasil[x] = hasil[x - 1];
            }

            if (banyak[i] == b && data[i] != hasil[x])
            {
                hasil[x] = data[i];
                x++;
            }
        }
    }

    for (int i = 0; i < y; i++)
    {
        if (banyak[i] == b)
        {
            d++;
        }
    }

    if (d == y)
    {
        x = 0;
    }
}

int main()
{
    float data[100], hasil[100];
    int a = 0;
    char ulang;

    cout << "========================================" << endl;
    cout << "        MODUL FUNCTION" << endl;
    cout << "========================================" << endl;
    cout << " MENENTUKAN DATA YANG SERING DIINPUTKAN" << endl;
    cout << "========================================" << endl;

    do
    {
        cout << "Masukkan data : ";
        cin >> data[a];
        a++;
        cout << "Masukkan data lagi? (y/n) : ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');

    akhir(data, a, hasil);

    if (x == 0)
    {
        cout << endl;
        line();
        cout << "Tidak ada data yang sering diinputkan " << endl;
        line();
    }
    else
    {
        cout << endl;
        cout << "======================================" << endl;
        cout << " Data yang sering diinputkan adalah ";
        for (int i = 0; i < x; i++)
        {
            cout << hasil[i] << " ";
        }
        cout << endl;
        cout << "=======================================" << endl;
    }

    getch(); 
    return 0;
}
