#include <iostream>
#include <string.h>
#include <string>
#include <cstdio>
#include "windows.h"
using namespace std;

void Num_1(char pal[256]){
    int a =  strlen(pal);
    bool t = true;
    for (int i = 0; i < a/2; i++){
        if (pal[i] != pal[a - i - 1]){
            t = false;
            break;
        }
    }
    if (t) cout << "Palindrom";
    else cout << "Not Palindrom";
}

int main() {
    //setlocale(LC_ALL, "Russian");
    system("chcp 65001");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char pal[256];
    gets_s(pal);
    Num_1(pal);

    return 0;
}
