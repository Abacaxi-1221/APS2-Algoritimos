#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quantos elementos vai ter o vetor? ";
    cin >> N;

    vector<double> v(N);
    double soma = 0.0;
    for (int i = 0; i < N; ++i) {
        cout << "Digite um numero: ";
        cin >> v[i];
        soma += v[i];
    }

    double media = soma / N;
    cout << fixed << setprecision(3);
    cout << "MEDIA DO VETOR = " << media << endl;

    cout << "ELEMENTOS ABAIXO DA MEDIA:" << endl;
    cout << fixed << setprecision(1);
    for (double x : v) {
        if (x < media) cout << x << endl;
    }

    return 0;
}
