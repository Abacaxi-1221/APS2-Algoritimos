#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Qual a ordem da matriz? ";
    cin >> N;

    vector<vector<int>> mat(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "DIAGONAL PRINCIPAL:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << mat[i][i];
        if (i < N-1) cout << " ";
    }
    cout << endl;

    int negativos = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (mat[i][j] < 0) negativos++;
        }
    }

    cout << "QUANTIDADE DE NEGATIVOS = " << negativos << endl;

    return 0;
}
