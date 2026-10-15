#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;
int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    //Масив
    int arr[100];
    // Рандомайзер
    srand(3);
    // Заповнюємо масив випадковими числами
    for (int i = 0; i < 100; i++) {
        arr[i] = rand() % 201 - 100;
    }
    // Треба вивести початковий масив
    cout << "Початковий масив:" << endl;
    for (int i = 0; i < 100; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    // Послідовності невід'ємних чисел довжиною > 5
    unsigned short count = 0;
    unsigned short start = 0;
    cout << "Початкові індекси послідовностей довжиною > 5" << endl;
    // Аналізуємо сам масив
    for (int i = 0; i < 100; i++) {
        // Перевіряємо чи число додатне
        if (arr[i] >= 0) {
            if (count == 0) {
                start = i;
            }
            count++;
        }
        // Якщо вже 5 чисел невід'ємні і зустріли від'ємне
        else {
            if (count > 5) {
                cout << start << endl;
            }
            count = 0;
        }
    }
    // Якщо останні будуть невід'ємними
    if (count > 5) {
        cout << start << endl;
    }
    return 0;
}