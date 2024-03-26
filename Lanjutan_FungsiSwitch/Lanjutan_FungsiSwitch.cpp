// Lanjutan_FungsiSwitch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int bilangan1, bilangan2;

int penjumlahan(int a, int b)
{
    return a + b;
}

int pengurangan(int a, int b)
{
    return a - b;
} 

int perkalian(int a, int b)
{
    return a * b;
} 

float pembagian(float a, float b)
{
    return a / b;
}  

void inputdata() 
{
    cout << "|nmassukan bilangan pertama: ";
    cin >> bilangan1;
    cout << "masukkan bilangan kedua: ";
    cin >> bilangan2;
}

int main() 
{
    int pilihan;
    do
    {
        system("CLS");
        cout << "menu kalkulator sederhana" << endl;
        cout << "1. penjumlahan" << endl;
        cout << "2. pengurangan" << endl;
        cout << "3.perkalian" << endl;
        cout << "4. pembagian" << endl;
        cout << "5. keluar" << endl;
        cin >> pilihan; 

        switch(pilihan)
        {
        case 1:
            inputdata();
            cout << "\nhasil penjumlahan: " << penjumlahan(bilangan1, bilangan2) << endl;
            system("pause");
            break;
        
        case 2:
            inputdata();
                cout << "\nhasil pengurangan: " << pengurangan(bilangan1, bilangan2) << endl;
            system("pause");
            break;

        case 3:
            inputdata();
                cout << "\nhasil perkalian: " << perkalian(bilangan1, bilangan2) << endl;
            system("pause");
            break;
         
        case 4:
            inputdata();
            cout << "\nhasil pembagian: " << pembagian(bilangan1, bilangan2) << endl;
            system("pause");
            break;
        case 5:
            break;
        default:
            cout << "pilihan tidak valid1" << endl;
            system("pause");
            break;
        }
    } while (pilihan != 5);

        return 0;
}

