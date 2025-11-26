#include <iostream>
#include <vector>
using namespace std;

struct Aluno {
    string nome;
    double nota1;
    double nota2;
};

int main() {
    int N;
    cout << "Quantos alunos serao digitados? ";
    cin >> N;

    vector<Aluno> vet(N);

    for (int i = 0; i < N; i++) {
        cout << "Dados do aluno #" << i+1 << ":\n";
        cout << "Nome: ";
        cin >> vet[i].nome;
        cout << "Nota 1: ";
        cin >> vet[i].nota1;
        cout << "Nota 2: ";
        cin >> vet[i].nota2;
    }

    cout << "\nAlunos aprovados:\n";

    for (int i = 0; i < N; i++) {
        double media = (vet[i].nota1 + vet[i].nota2) / 2.0;
        if (media >= 6.0) {
            cout << vet[i].nome << endl;
        }
    }

    return 0;
}
