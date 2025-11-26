#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    vector<double> v(N);
    double soma = 0.0;
    for (int i = 0; i < N; ++i) {
        cout << "Digite um numero: ";
        cin >> v[i];
        soma += v[i];
    }

    cout << fixed << setprecision(1);
    cout << "VALORES =";
    for (int i = 0; i < N; ++i) {
        cout << (i == 0 ? " " : " ") << v[i];
    }
    cout << endl;

    cout << fixed << setprecision(2);
    cout << "SOMA = " << soma << endl;
    cout << "MEDIA = " << (soma / N) << endl;

    return 0;
}
