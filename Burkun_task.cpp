#include <iostream>
#include "D:\LAB9\burkunlib\BURKUN.h"

using namespace std;

int main() {
    int x, y, z, s, rc1, rc2, sem;
    double footLength;
    char c;
    bool exit_program = false;
    while (!exit_program) {
        cout << "Enter 'u' to perform s_calculation(), 't' for the first task, 'r' for the second task, or 'e' for the third task: ";
        cin >> c;
        switch (c) {
            case 'u':
                s_calculation(x,y,z,s);
                break;
            case 't':
                ocinka(rc1,rc2,sem);
                break;
            case 'r':
                foot_size(footLength);
                break;
            case 'e':
                binarny_chisla();
                break;
            case 'w':
            case 'i':
                std::cout << "Exiting program...\n";
                exit_program = true;
                break;
            default:
                std::cout << "\aInvalid input. Please enter 'u', 't', 'r', 'e', 'w', or 'i'.\n";
                break;
        }
    }
    return 0;
}
