#include <iostream>
#include <cmath>

using namespace std;

int s_calculation(int x, int y, int z, int s)
{

    s = pow(x, 2) - pow(y, 3) + sqrt(pow(y, x)) + 3.14;

    cout << "Calculation of S = " << s << endl;

    return 0;
}

int ocinka(int rc1, int rc2, int sem)
{
    cout << "Enter the score for the first checkpoint (out of 30): ";
    cin >> rc1;
    cout << "Enter the score for the second checkpoint (out of 30): ";
    cin >> rc2;
    cout << "Enter the score for the semester exam (out of 40): ";
    cin >> sem;

    int total = rc1 + rc2 + sem;
    double percentage = static_cast<double>(total) / 100.0;

    if (percentage >= 0.9) {
        cout << "Your grade is A.\n";
    } else if (percentage >= 0.8) {
        cout << "Your grade is B.\n";
    } else if (percentage >= 0.7) {
        cout << "Your grade is C.\n";
    } else if (percentage >= 0.6) {
        cout << "Your grade is D.\n";
    } else {
        cout << "Your grade is F.\n";
    }

    return 0;
}

int foot_size(double footLength)
{
    cout << "Enter the foot length in centimeters: ";
    cin >> footLength;

    int sizeUkraine = 0;
    if (footLength >= 23.0 && footLength < 23.5) {
        sizeUkraine = 36;
    } else if (footLength >= 25.5 && footLength < 26.0) {
        sizeUkraine = 41;
    } else if (footLength >= 26.0 && footLength < 26.5) {
        sizeUkraine = 42;
    } else if (footLength >= 26.5 && footLength < 27.0) {
        sizeUkraine = 43;
    } else if (footLength >= 27.0 && footLength < 27.5) {
        sizeUkraine = 44;
    } else if (footLength >= 27.5 && footLength < 28.0) {
        sizeUkraine = 45;
    } else if (footLength >= 28.0 && footLength < 28.5) {
        sizeUkraine = 46;
    } else if (footLength >= 28.5 && footLength < 29.0) {
        sizeUkraine = 47;
    } else if (footLength >= 29.0 && footLength < 29.5) {
        sizeUkraine = 48;
    } else {
        cout << "Sorry, we couldn't find a corresponding size in Ukraine for the given foot length.\n";
        return 0;
    }

    cout << "The corresponding shoe size in Ukraine is " << sizeUkraine << ".\n";

    return 0;
}

int binarny_chisla()
{
    unsigned int n;
    cout << "Enter a natural number from 0 to 50000000: ";
    cin >> n;

    int d = (n / 10) % 10;
    int bit = (d == 0) ? 0 : 1;
    int count = 0;
    for (unsigned int i = n; i != 0; i >>= 1) {
        count += ((i & 1) == bit) ? 1 : 0;
    }

    cout << "The number of binary " << ((bit == 0) ? "zeros" : "ones") << " in the number " << n << " is " << count << ".\n";

    return 0;
}


