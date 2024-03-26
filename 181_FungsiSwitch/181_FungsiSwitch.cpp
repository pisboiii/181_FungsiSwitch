// 181_FungsiSwitch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int luas;

void prosedurluas(int p, int l)
{
    luas = p * l;
}

int fungsiluas(int p, int l)
{
    return p = l;
}



int main()
{
        int panjang, lebar;
        cout << "masukkan Panjang: ";
        cin >> panjang;
        cout << "masukkan lebar :";
        cin >> lebar;
        
        prosedurluas(luas, lebar);
            cout << "luas persegi panjang" << luas << endl;
         
        cout << "luas persegi panjang dengan fungsi: " << fungsiluas(panjang, lebar) << luas << endl;

        return 0;
}

