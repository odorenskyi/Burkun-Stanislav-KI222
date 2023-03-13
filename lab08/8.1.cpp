#include <iostream>
#include <cmath>

using namespace std;

int s_calculation(int x, int y, int z, int s)
{

    s = pow(x, 2) - pow(y, 3) + sqrt(pow(y, x)) + 3.14;

    cout << "Calculation of S = " << s << endl;

    return 0;
}
