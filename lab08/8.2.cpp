#include <iostream>
#include <iomanip>
#include "D:\LAB8\ModulesBurkun\burkun.h"
#include <cmath>

using namespace std;

int Viraz(int a, int b)
{
    cout << "Result of a <= b - 32: " << (a <= b - 32) << endl;
    return 0;
}

int Systemi(int x, int y, int z)
{
    cout << "Decimal value of x: " << x << endl;
    cout << "Decimal value of y: " << y << endl;
    cout << "Decimal value of z: " << z << endl;

    cout << "Hexadecimal value of x: " << hex << x << endl;
    cout << "Hexadecimal value of y: " << hex << y << endl;
    cout << "Hexadecimal value of z: " << hex << z << endl;
    return 0;
}

void Rozrobnyk(){
    cout << "Burkun Stanislav © \n";
}

int main() {
    Rozrobnyk();

    int x, y, z, a, b, s;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    Rozrobnyk();

    cout << Viraz(a,b);

    cout << Systemi(x,y,z);

    cout << s_calculation(x,y,z,s);
    return 0;
}
