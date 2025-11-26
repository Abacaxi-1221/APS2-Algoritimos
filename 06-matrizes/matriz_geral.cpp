#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Qual a ordem da matriz? ";
    cin >> N;

    vector<vector<double>> mat(N, vector<double>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    double somaPositivos = 0.0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (mat[i][j] > 0) somaPositivos += mat[i][j];
        }
    }

    cout << fixed << setprecision(1);
    cout << "SOMA DOS POSITIVOS: " << somaPositivos << endl;

    int linha;
    cout << "Escolha uma linha: ";
    cin >> linha;
    cout << "LINHA ESCOLHIDA: ";
    for (int j = 0; j < N; ++j) {
        cout << mat[linha][j];
        if (j < N-1) cout << " ";
    }
    cout << endl;

    int coluna;
    cout << "Escolha uma coluna: ";
    cin >> coluna;
    cout << "COLUNA ESCOLHIDA: ";
    for (int i = 0; i < N; ++i) {
        cout << mat[i][coluna];
        if (i < N-1) cout << " ";
    }
    cout << endl;

    cout << "DIAGONAL PRINCIPAL: ";
    for (int i = 0; i < N; ++i) {
        cout << mat[i][i];
        if (i < N-1) cout << " ";
    }
    cout << endl;

    // Alterar matriz: elevar ao quadrado os numeros negativos
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (mat[i][j] < 0) mat[i][j] = mat[i][j] * mat[i][j];
        }
    }

    cout << "MATRIZ ALTERADA:" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << mat[i][j];
            if (j < N-1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
