#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    long n = 0;
    double term;
    double sum = 0;
    const double eps = 0.000001;

    long k2 = 1;
    short k1 = 1;
    while (true) {
        term = k1 * (1 - (double)k2 / (k2 + 1));
        if (abs(term) <= eps) {
            break;
        }
            sum += term;
            if (n == 9) {
                cout << "Сума 10 членів ряду = " << fixed << setprecision(7) << sum << endl;
            }
            k1 = -k1;
            k2 = k2 * 2;
            n += 1;
        }
    cout << "Повна сума ряду = " << fixed << setprecision(7) << sum << endl;
    return 0;
    }