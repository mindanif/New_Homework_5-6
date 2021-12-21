#include <iostream>
#include <string.h>
#include <string>
#include <cstdio>
#include "windows.h"
#include <math.h>
using namespace std;

void Num_5(char string[256], char word[32]){
    int lenSTR = strlen(string);
    int lenWRD = strlen(word);
    int c = 0;
    for (int i = 0; i < lenSTR - lenWRD + 1; i++){
        bool t = true;
        for (int j = 0; j < lenWRD; j++){
            if (string[i+j] != word[j]) t = false;
        }
        if (t) c++;
    }
    cout << c;
}

int main() {
    //setlocale(LC_ALL, "Russian");
    system("chcp 65001");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char string[256];
    char word[32];
    gets_s(string);
    gets_s(word);
    Num_5(string, word);

    return 0;
}
