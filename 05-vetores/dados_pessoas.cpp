#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    vector<double> alturas(N);
    vector<char> generos(N);

    for (int i = 0; i < N; ++i) {
        cout << "Altura da " << (i+1) << "a pessoa: ";
        cin >> alturas[i];
        cout << "Genero da " << (i+1) << "a pessoa: ";
        cin >> generos[i];
    }

    double menor = alturas[0];
    double maior = alturas[0];
    double somaMulheres = 0.0;
    int contMulheres = 0;
    int contHomens = 0;

    for (int i = 0; i < N; ++i) {
        if (alturas[i] < menor) menor = alturas[i];
        if (alturas[i] > maior) maior = alturas[i];
        if (generos[i] == 'F' || generos[i] == 'f') {
            somaMulheres += alturas[i];
            contMulheres++;
        }
        if (generos[i] == 'M' || generos[i] == 'm') contHomens++;
    }

    cout << fixed << setprecision(2);
    cout << "Menor altura = " << menor << endl;
    cout << "Maior altura = " << maior << endl;
    if (contMulheres > 0) {
        cout << "Media das alturas das mulheres = " << (somaMulheres / contMulheres) << endl;
    } else {
        cout << "Media das alturas das mulheres = 0.00" << endl;
    }
    cout << "Numero de homens = " << contHomens << endl;

    return 0;
}
