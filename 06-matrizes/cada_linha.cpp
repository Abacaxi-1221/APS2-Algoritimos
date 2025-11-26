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

    cout << "MAIOR ELEMENTO DE CADA LINHA:" << endl;
    for (int i = 0; i < N; ++i) {
        int maior = mat[i][0];
        for (int j = 1; j < N; ++j) {
            if (mat[i][j] > maior) maior = mat[i][j];
        }
        cout << maior << endl;
    }

    return 0;
}
