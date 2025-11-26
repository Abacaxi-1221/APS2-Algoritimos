#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quanto numeros voce vai digitar? ";
    cin >> N;

    vector<double> v(N);
    for (int i = 0; i < N; ++i) {
        cout << "Digite um numero: ";
        cin >> v[i];
    }

    double maior = v[0];
    int pos = 0;
    for (int i = 1; i < N; ++i) {
        if (v[i] > maior) {
            maior = v[i];
            pos = i;
        }
    }

    cout << fixed << setprecision(1);
    cout << "MAIOR VALOR = " << maior << endl;
    cout << "POSICAO DO MAIOR VALOR = " << pos << endl;

    return 0;
}
