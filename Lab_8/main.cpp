#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <cstring>
#include <iomanip>

using namespace std;

struct Computer {
    char proc[15];
    int mgz;
    int mb;
    char type;
};
struct queue {
    Computer info;
    queue *dali;
};
void print_queue (queue *&first, queue *&last);
bool queue_function(queue *&first, queue *&last);

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    queue *first = nullptr;
    queue *last = nullptr;
    while (queue_function(first, last) == true) {
    }
    cout << "\n-----------------------------------------------------\n";
    cout << "|                Характеристики ПЕОМ                |\n";
    cout << "-----------------------------------------------------\n";
    cout << "| " << setw(15) << left << "Процессор"
         << "| " << setw(15) << "Частота (Mgz)"
         << "| " << setw(10) << "RAM (Mb)"
         << "| " << setw(10)  << "Тип" << " |\n";
    cout << "-----------------------------------------------------\n";
    print_queue(first, last);
    cout << "-----------------------------------------------------\n";
    cout << "| " "Тип: C - CISC-процесор, R - RISC-процесор          " << "|\n";
    cout << "-----------------------------------------------------\n";
    return 0;
}

bool queue_function(queue *&first, queue *&last) {
    queue *element = new queue;
    cout << "Введіть: процесор, частоту, пам'ять, тип: ";
    cin >> (*element).info.proc;
    if (strcmp((*element).info.proc, "***") == 0) {
        delete element;
        return false;
    }
    cin >> (*element).info.mgz >> (*element).info.mb >> (*element).info.type;
    (*element).dali = nullptr;

    if (first == nullptr) {
        first = element;
        last = element;
    }
    else {
        (*last).dali = element;
        last = element;
    }
    return true;
}

void print_queue (queue *&first, queue *&last) {
    queue *element = new queue;
    queue *current_element = first;
    while (current_element != nullptr) {
        cout << "| " << setw(15) << left << (*current_element).info.proc
             << "| " << setw(14) << (*current_element).info.mgz
             << "| " << setw(10) << (*current_element).info.mb
             << "| " << setw(10)  << (*current_element).info.type << " |\n";
        current_element = (*current_element).dali;
    }
}