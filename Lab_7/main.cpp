#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <cstring>
#include <iomanip>
#include <time.h>

using namespace std;

struct Computer {
    char proc[15];
    int mgz;
    int mb;
    char type;
};

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    Computer list[10];
    int n = 0;
    for (n = 0; n < 10; n++) {
        cout << "Введіть: процесор, частоту, пам'ять, тип: ";
        cin >> list[n].proc;
        if (strcmp(list[n].proc, "***") == 0) {
            break;
        }
        cin >> list[n].mgz >> list[n].mb >> list[n].type;
    }
    cout << "\n-----------------------------------------------------\n";
    cout << "|                Характеристики ПЕОМ                |\n";
    cout << "-----------------------------------------------------\n";
    cout << "| " << setw(15) << left << "Процессор"
         << "| " << setw(115) << "Частота (Mgz)"
         << "| " << setw(10) << "RAM (Mb)"
         << "| " << setw(5)  << "Тип" << " |\n";
    cout << "-----------------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << "| " << setw(15) << left << list[i].proc
             << "| " << setw(14) << list[i].mgz
             << "| " << setw(10) << list[i].mb
             << "| " << setw(5)  << list[i].type << " |\n";
    }
    cout << "-----------------------------------------------------\n";
    cout << "| " "Тип: C - CISC-процесор, R - RISC-процесор   " << "|\n";
    cout << "-----------------------------------------------------\n";
    return 0;
}