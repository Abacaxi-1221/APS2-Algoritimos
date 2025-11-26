#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; ++i) {
        cout << "Digite um numero: ";
        cin >> v[i];
    }

    cout << "NUMEROS PARES:" << endl;
    int cont = 0;
    for (int i = 0; i < N; ++i) {
        if (v[i] % 2 == 0) {
            if (cont > 0) cout << " ";
            cout << v[i];
            cont++;
        }
    }
    cout << endl;
    cout << "QUANTIDADE DE PARES = " << cont << endl;

    return 0;
}
