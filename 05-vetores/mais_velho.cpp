#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    cout << "Quantas pessoas voce vai digitar? ";
    cin >> N;

    vector<string> nomes(N);
    vector<int> idades(N);

    for (int i = 0; i < N; ++i) {
        cout << "Dados da " << (i+1) << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore();
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
    }

    int maiorIdade = idades[0];
    int pos = 0;
    for (int i = 1; i < N; ++i) {
        if (idades[i] > maiorIdade) {
            maiorIdade = idades[i];
            pos = i;
        }
    }

    cout << "PESSOA MAIS VELHA: " << nomes[pos] << endl;

    return 0;
}
