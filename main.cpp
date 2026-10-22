#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;
int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    srand(0);
    unsigned short S = 9;
    //Створюємо двохвимірний масив
    int Ar[S][S];
    //Заповнюємо його
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            Ar[i][j] = rand() % 100;
        }
    }
    //Виводимо початковий масив
    cout << "Початкова матриця: " << endl;
    for (int i = 0; i < 9; i++) {
        for (int k = 0; k < 9; k++) {
            cout << Ar[i][k] << "\t";
        }
        cout << endl;
    }
    //Рахуємо рядки і стовпчики
    for (int i = 0; i < 9; i++) {
        int sum = 0;
        for (int k = 0; k < 9; k++) {
            if (k != i) {
                sum += Ar[i][k];
                sum += Ar[k][i];
            }
        }
        Ar[i][i] = sum;
    }
    //Виводимо оброблену матрицю
    cout << "Оброблена матриця: " << endl;
    for (int i = 0; i < 9; i++) {
        for (int k = 0; k < 9; k++) {
            cout << Ar[i][k] << "\t";
        }
        cout << endl;
    }
    return 0;
}