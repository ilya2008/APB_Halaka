#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h>

using namespace std;
int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    srand(time(NULL));
    short size;
    cout << "Введіть розмір масиву: ";
    cin >> size;
    int *Ar = (int*) malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        Ar[i] = rand() % 101 - 50;
    }
    cout << "Початковий масив: " << endl;
    for (int i = 0; i < size; i++) {
        cout << Ar[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        if (Ar[i] > 0) {
            for (int j = 0; j < size; j++) {
                if (Ar[j] == -Ar[i]) {
                    Ar[j] = 0;
                    Ar[i] = 0;
                    break;
                }
            }
        }
    }
    cout << endl;
    cout << "Масив результат: " << endl;
    for (int i = 0; i < size; i++) {
        cout << Ar[i] << "\t";
    }
    free(Ar);
    return 0;
}