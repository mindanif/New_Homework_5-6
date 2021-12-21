#include <iostream>
#include <string.h>
#include <string>
#include <cstdio>
#include "windows.h"
#include <math.h>
using namespace std;

void Num_4(char file[256]){
    char l[6] = ".imim";
    int Len = strlen(file);
    int i = Len - 1;
    while (file[i] != '.'){
        i--;
        if (i == 0){
            i = Len;
            break;
        }
    }
    for (int j = 0; j < 6; j++){
        file[i] = l[j];
        i++;
    }
    cout << file;
}
int main() {
    //setlocale(LC_ALL, "Russian");
    system("chcp 65001");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char file[256];
    gets_s(file);
    Num_4(file);

    return 0;
}
