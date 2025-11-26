#include <iostream>
#include <vector>
using namespace std;

struct Funcionario {
    string nome;
    double valorHora;
    double horas;
};

int main() {
    int N;
    cout << "Quantos funcionarios serao digitados? ";
    cin >> N;

    vector<Funcionario> vet(N);

    for (int i = 0; i < N; i++) {
        cout << "Funcionario #" << i+1 << ":\n";
        cout << "Nome: ";
        cin >> vet[i].nome;
        cout << "Valor por hora: ";
        cin >> vet[i].valorHora;
        cout << "Horas trabalhadas: ";
        cin >> vet[i].horas;
    }

    cout << "\nPAGAMENTOS:\n";

    for (int i = 0; i < N; i++) {
        double pagamento = vet[i].valorHora * vet[i].horas;
        cout << vet[i].nome << " - R$ " << pagamento << endl;
    }

    return 0;
}
