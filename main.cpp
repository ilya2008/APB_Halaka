#include <iostream>
#include <windows.h>

using namespace std;
int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int choice;
    cout << "1.	Введеня координат точок\n";
    cout << "2.	Виведення на екран результату\n";
    cout << "3.	Вихід з програми\n";
    cout << "Ваш вибір:  ";
    cin >> choice;
    if (choice != 1) {
        cout << "Спочатку введіть координат точок(1): ";
        cin >> choice;
    }
    double x, y;
    while (choice != 3) {
        switch (choice) {
            case 1:
                // Беремо координати, які дав корстувач
                cout << "Введіть x та y:  ";
                cin >> x >> y;
                break;
            case 2:
                // Виводимо результат не екран
                if (x * x + y * y <= 1 && (x <= 0 || y >= 0)) {

                    cout << "Точка попадає в область\n";
                }
                else {
                    cout << "Точка не попадає в область\n";
                }
                break;
        }
        cout << "Ваш вибір: ";
        cin >> choice;
    }
}