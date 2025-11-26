#include <iostream>
#include <vector>
using namespace std;

// ----------------- PROTÓTIPOS -----------------
void lerVetor(vector<int>& v);
double media(const vector<int>& v);
int maior(const vector<int>& v);
int menor(const vector<int>& v);
int contarPares(const vector<int>& v);

// ----------------- FUNÇÃO PRINCIPAL -----------------
int main() {
    vector<int> vet;
    int opcao;

    do {
        cout << "\n----- MENU -----\n";
        cout << "1 - Ler vetor\n";
        cout << "2 - Media dos valores\n";
        cout << "3 - Maior e menor valor\n";
        cout << "4 - Contar pares\n";
        cout << "5 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                lerVetor(vet);
                break;

            case 2:
                if (vet.empty()) cout << "Vetor vazio. Use a opcao 1 primeiro.\n";
                else cout << "Media = " << media(vet) << endl;
                break;

            case 3:
                if (vet.empty()) cout << "Vetor vazio. Use a opcao 1 primeiro.\n";
                else {
                    cout << "Maior = " << maior(vet) << endl;
                    cout << "Menor = " << menor(vet) << endl;
                }
                break;

            case 4:
                if (vet.empty()) cout << "Vetor vazio. Use a opcao 1 primeiro.\n";
                else cout << "Quantidade de pares = " << contarPares(vet) << endl;
                break;

            case 5:
                cout << "Encerrando...\n";
                break;

            default:
                cout << "Opcao invalida!\n";
        }

    } while (opcao != 5);

    return 0;
}



void lerVetor(vector<int>& v) {
    int N;
    cout << "Quantos elementos vai ter o vetor? ";
    cin >> N;

    v.resize(N);

    cout << "Digite os " << N << " valores:\n";
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
}

double media(const vector<int>& v) {
    double soma = 0;
    for (int x : v) soma += x;
    return soma / v.size();
}

int maior(const vector<int>& v) {
    int m = v[0];
    for (int x : v)
        if (x > m) m = x;
    return m;
}

int menor(const vector<int>& v) {
    int m = v[0];
    for (int x : v)
        if (x < m) m = x;
    return m;
}

int contarPares(const vector<int>& v) {
    int cont = 0;
    for (int x : v)
        if (x % 2 == 0) cont++;
    return cont;
}
