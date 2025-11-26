#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quantos alunos serao digitados? ";
    cin >> N;

    vector<string> nomes(N);
    vector<double> n1(N), n2(N);

    for (int i = 0; i < N; ++i) {
        cout << "Digite nome, primeira e segunda nota do " << (i+1) << "o aluno:" << endl;
        cin.ignore();
        getline(cin, nomes[i]);
        cin >> n1[i];
        cin >> n2[i];
    }

    cout << "Alunos aprovados:" << endl;
    for (int i = 0; i < N; ++i) {
        double media = (n1[i] + n2[i]) / 2.0;
        if (media >= 6.0) {
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
