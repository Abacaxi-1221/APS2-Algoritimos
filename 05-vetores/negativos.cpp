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

    cout << "NUMEROS NEGATIVOS:" << endl;
    for (int x : v) {
        if (x < 0) cout << x << endl;
    }

    return 0;
}
