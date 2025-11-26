#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    cout << "Quantas linhas vai ter cada matriz? ";
    cin >> M;
    cout << "Quantas colunas vai ter cada matriz? ";
    cin >> N;

    vector<vector<int>> A(M, vector<int>(N));
    vector<vector<int>> B(M, vector<int>(N));

    cout << "Digite os valores da matriz A:" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "Digite os valores da matriz B:" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> B[i][j];
        }
    }

    cout << "MATRIZ SOMA:" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << (A[i][j] + B[i][j]);
            if (j < N-1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
