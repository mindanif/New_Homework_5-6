#include <iostream>
#include <string.h>
#include <string>
#include <cstdio>
#include "windows.h"
#include <math.h>
using namespace std;

void Num_3(char FIO[256]){
    //cin.getline(FIO);
    int len = strlen(FIO);
    char Family[256];
    int i = 0;
    while (FIO[i] != ' '){
        Family[i] = FIO[i];
        i++;
    }
    Family[i] = '\0';
    for (i; i < len; i++){
        FIO[i];
        if (FIO[i] == ' '){
            cout << FIO[i+1] << '.';
        }
    }
    cout << ' ';
    cout << Family;
}

int main() {
    //setlocale(LC_ALL, "Russian");
    system("chcp 65001");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char FIO[256];
    gets_s(FIO);
    Num_3(FIO);

    return 0;
}
