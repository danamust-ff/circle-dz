#include <Windows.h>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct circle
{
    double centre[2];
    double radius;
    string color;
};


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "введи количество окружностей: ";
    cin >> n;
    cin.ignore();
    circle* cir = new circle[n];

    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < 2; j++)
        {
            cout << "введи координаты центра " << i + 1 << "-ой окружности: ";
            cin >> cir[i].centre[j];
        }
        cout << "введи радиус " << i + 1 << "-ой окружности: ";
        cin >> cir[i].radius;
        cin.ignore();
        cout << "введи цвет " << i + 1 << "-ой окружности: ";
        getline(cin, cir[i].color);
    }
    cout << endl;
    cout << "Все окружности" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " Координаты центра - ";
        for (int j = 0; j < 2; j++)
        {
            cout << cir[i].centre[j] << setw(4);
        }
        cout << endl;
        cout << "Радиус - " << cir[i].radius << endl;
        cout << "Цвет - " << cir[i].color << endl;
        cout << endl;
    }
}

// 