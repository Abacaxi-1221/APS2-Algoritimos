#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int M, N;
    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> M;
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> N;

    vector<vector<double>> mat(M, vector<double>(N));
    for (int i = 0; i < M; ++i) {
        cout << "Digite os elementos da " << (i+1) << "a. linha:" << endl;
        for (int j = 0; j < N; ++j) {
            cin >> mat[i][j];
        }
    }

    cout << "VETOR GERADO:" << endl;
    cout << fixed << setprecision(1);
    for (int i = 0; i < M; ++i) {
        double soma = 0.0;
        for (int j = 0; j < N; ++j) soma += mat[i][j];
        cout << soma << endl;
    }

    return 0;
}
