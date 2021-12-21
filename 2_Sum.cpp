#include <iostream>
#include <string.h>
#include <string>
#include <cstdio>
#include "windows.h"
#include <math.h>
using namespace std;
int iny (char h[64], int j){    //ко Второму заданию
    j--;
    int i = 0;
    int S = 0;
    while (j >= 0){
        int l = 1;
        for (int k = 0; k < i; k++){
            l *= 10;
        }
        int H = h[j];
        S += l * (H - 48);
        i++;
        j--;
    }
    return S;
}

void Num_2(char sum[256]){
    int b = 0;
    char h[64];
    int g;
    int j = 0;
    for (int i = 0; i < strlen(sum); i++){
        if (sum[i] != '+'){
            h[j] = sum[i];
            j++;
        }
        else{
            h[j+1] = '\0';
            b += iny(h, j);
            j = 0;
        }
        g = j;
    }
    h[g] = '\0';
    b += iny(h, g);
    cout << b;
}


int main() {
    //setlocale(LC_ALL, "Russian");
    system("chcp 65001");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char sum[256];
    gets_s(sum);
    Num_2(sum);

    return 0;
}
