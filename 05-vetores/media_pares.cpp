#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quantos elementos vai ter o vetor? ";
    cin >> N;

    vector<int> v(N);
    int soma = 0;
    int cont = 0;
    for (int i = 0; i < N; ++i) {
        cout << "Digite um numero: ";
        cin >> v[i];
        if (v[i] % 2 == 0) {
            soma += v[i];
            cont++;
        }
    }

    if (cont == 0) {
        cout << "NENHUM NUMERO PAR" << endl;
    } else {
        double media = (double)soma / cont;
        cout << fixed << setprecision(1);
        cout << "MEDIA DOS PARES = " << media << endl;
    }

    return 0;
}
