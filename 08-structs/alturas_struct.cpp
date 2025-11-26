#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
    double altura;
};

int main() {
    int N;
    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    vector<Pessoa> vet(N);

    for (int i = 0; i < N; i++) {
        cout << "Dados da pessoa #" << i+1 << ":\n";
        cout << "Nome: ";
        cin >> vet[i].nome;
        cout << "Idade: ";
        cin >> vet[i].idade;
        cout << "Altura: ";
        cin >> vet[i].altura;
    }

    double somaAlturas = 0.0;
    int countMenores = 0;

    for (int i = 0; i < N; i++) {
        somaAlturas += vet[i].altura;
        if (vet[i].idade < 16) {
            countMenores++;
        }
    }

    double mediaAlturas = somaAlturas / N;
    double percentual = (countMenores * 100.0) / N;

    cout << fixed << setprecision(2);
    cout << "\nAltura media = " << mediaAlturas << endl;
    cout << "Pessoas com menos de 16 anos: " << percentual << "%\n";

    for (int i = 0; i < N; i++) {
        if (vet[i].idade < 16) {
            cout << vet[i].nome << endl;
        }
    }

    return 0;
}
