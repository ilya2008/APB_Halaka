#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <time.h>
void fillmatrix(int **Ar, int size);
void printmatrix(int **Ar, int size);

using namespace std;
int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    srand(time(NULL));

    unsigned short size;
    cout << "Введіть розмір матриці: ";
    cin >> size;

    int **Ar = (int**)malloc(sizeof(int*) * size);

    for (int i = 0; i < size; i++) {
        Ar[i] = (int*)malloc(sizeof(int) * size);
    }
    fillmatrix(Ar, size);
    cout << "Матриця заповнена по спіралі :" << endl;
    printmatrix(Ar, size);
    free(Ar);
    return 0;
}

void fillmatrix(int **Ar, int size) {
    int row = size / 2;
    int col = size / 2;
    int n = 1;
    int step = 1;
    Ar[row][col] = n++;
    while (n <= size * size) {
        for (int i = 0; i < step && n <= size * size ;i++) {
            row++;
            Ar[row][col] = n++;
        }
        for (int i = 0; i < step && n <= size * size ;i++) {
            col--;
            Ar[row][col] = n++;
        }
        step++;
        for (int i = 0; i < step && n <= size * size ;i++) {
            row--;
            Ar[row][col] = n++;
        }
        for (int i = 0; i < step && n <= size * size ;i++) {
            col++;
            Ar[row][col] = n++;
        }
        step++;
    }
}
void printmatrix(int **Ar, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << Ar[i][j] << "\t";
        }
        cout << endl;
    }
}