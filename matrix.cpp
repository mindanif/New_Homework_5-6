#include <iostream>
#include <time.h>
#include <cmath>
using namespace std;

void inArr(int** mas, int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            mas[i][j] = rand() % 40 + 1;
        }
    }
}

void prArr(int** mas, int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << mas[i][j];
            cout << '\t';
        }
        cout << '\n';
    }
}

void Num_1(){
    srand(time(NULL));
    int n, m ;
    cout << "enter the dimensions of the array: n*m";
    cout << endl;
    cin >> n >> m;
    int** maf = new int* [n];
    for (int i = 0; i < n; i++){
        maf[i] = new int[m];
    }
    int** mat1 = new int* [n-1];
    for (int i = 0; i < n-1; i++){
        mat1[i] = new int[m-1];
    }
    inArr(maf, n, m);
    int min = 33000;
    int ki, kj;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (maf[i][j] < min){
                min = maf[i][j];
                ki = i;
                kj = j;
            }
        }
    }
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < m-1; j++){
            if (i < ki && j < kj){
                mat1[i][j] = maf[i][j];
            }
            else if (i >= ki && j < kj) {
                mat1[i][j] = maf[i + 1][j];
            }
            else if (i < ki && j >= kj) {
                mat1[i][j] = maf[i][j + 1];
            }
            else if (i >= ki && j >= kj) {
                mat1[i][j] = maf[i + 1][j + 1];
            }
        }
    }
    prArr(maf, n, m);
    cout << '\n';
    prArr(mat1, n-1, m-1);
    for (int i = 0; i < n; ++i)
        delete[] maf[i];
    delete[] maf;
    for (int i = 0; i < n-1; ++i)
        delete[] mat1[i];
    delete[] mat1;
}

void Num_2(){
    srand(time(NULL));
    int n, m, l;
    cout << "enter the dimensions of the array: n*m, m*l";
    cout << endl;
    cin >> n >> m >> l;
    int** maf = new int* [n];
    for (int i = 0; i < n; i++){
        maf[i] = new int[m];
    }
    int** mat1 = new int* [m];
    for (int i = 0; i < m; i++){
        mat1[i] = new int[l];
    }
    inArr(maf, n, m);
    inArr(mat1, m, l);
    prArr(maf, n, m);
    cout << endl;
    prArr(mat1, m, l);
    cout << endl;
    int** prod = new int* [n];
    for (int i = 0; i < n; i++){
        prod[i] = new int[l];
    }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < l; j++)
        {
            prod[i][j] = 0;
            for(int k = 0; k < m; k++)
                prod[i][j] += maf[i][k] * mat1[k][j];
        }
    prArr(prod, n, l);

    for (int i = 0; i < n; ++i)
        delete[] maf[i];
    delete[] maf;
    for (int i = 0; i < m; ++i)
        delete[] mat1[i];
    delete[] mat1;
    for (int i = 0; i < n; ++i)
        delete[] prod[i];
    delete[] prod;
}

void Num_3(){
    srand(time(NULL));
    int n;
    cout << "enter the dimensions of the array: n*n";
    cout << endl;
    cin >> n;
    int** maf = new int* [n];
    for (int i = 0; i < n; i++){
        maf[i] = new int[n];
    }
    inArr(maf, n, n);
    int** mat = new int* [n];
    for (int i = 0; i < n; i++){
        mat[i] = new int[n];
    }
    for (int i = n - 1; i >= 0; i--){
        for (int j = n - 1; j >= 0; j--){
            mat[n - j - 1][n - 1 - i] = maf[i][j];
        }
    }
    prArr(mat, n, n);
    cout << endl;
    prArr(maf, n, n);

    for (int i = 0; i < n; ++i)
        delete[] maf[i];
    delete[] maf;
    for (int i = 0; i < n; ++i)
        delete[] mat[i];
    delete[] mat;
}

void Num_4(){
    srand(time(NULL));
    int n;
    cout << "enter the dimensions of the array: n*n";
    cout << endl;
    cin >> n;
    int** maf = new int* [n];
    for (int i = 0; i < n; i++){
        maf[i] = new int[n];
    }
    inArr(maf, n, n);
    int** mat = new int* [n];
    for (int i = 0; i < n; i++){
        mat[i] = new int[n];
    }
    int min = 33000;
    int ki, kj;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (maf[i][j] < min){
                min = maf[i][j];
                ki = i;
                kj = j;
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            mat[i][j] = maf[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        mat[i][kj] = maf[ki][i];
    }
    for (int i = 0; i < n; i++){
        mat[ki][i] = maf[i][kj];
    }
    prArr(maf, n, n);
    cout << endl;
    prArr(mat, n, n);

    for (int i = 0; i < n; ++i)
        delete[] maf[i];
    delete[] maf;
    for (int i = 0; i < n; ++i)
        delete[] mat[i];
    delete[] mat;
}

void Num_5(){
    srand(time(NULL));
    int n, m;
    cout << "enter the dimensions of the array: n*m";
    cout << endl;
    cin >> n >> m;
    int** maf = new int* [n];
    for (int i = 0; i < n; i++){
        maf[i] = new int[m];
    }
    inArr(maf, n, m);
    int** mat = new int* [n];
    for (int i = 0; i < n; i++){
        mat[i] = new int[m];
    }
    int mini, minj, max = -1, min = 10000, max1 = 0;
    for (int i = 0; i < m; i++){
        mat[0][i] = maf[0][i];
        if (maf[0][i] > max){
            max = maf[0][i];
        }
    }
    max1 = max;
    max = 0;
    for (int i = 1; i < n; i++){
        for (int j = 0; j < m; j++) {
            mat[i][j] = maf[i][j];
            if (maf[i][j] > max) {
                max = maf[i][j];
            }if (maf[i][j] < min) {
                min = maf[i][j];
                minj = j;
            }
        }
        mat[i][minj] = max1;
        max1 = max;
        max = 0;
        min = 10000;
    }
    prArr(maf, n, m);
    cout << endl;
    prArr(mat, n, m);

    for (int i = 0; i < n; ++i)
        delete[] maf[i];
    delete[] maf;
    for (int i = 0; i < n; ++i)
        delete[] mat[i];
    delete[] mat;
}

int main() {
    int a;
    cout << "Enter the job number";
    cout << endl;
    cin >> a;
    switch (a) {
        case 1:Num_1();break;
        case 2:Num_2();break;
        case 3:Num_3();break;
        case 4:Num_4();break;
        case 5:Num_5();break;
    }
    return 0;
}
