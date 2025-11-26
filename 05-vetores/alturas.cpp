#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;
    
    vector<string> nomes(N);
    vector<int> idades(N);
    vector<double> alturas(N);

    for (int i = 0; i < N; ++i) {
        cout << "Dados da " << (i+1) << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore();
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }

    double somaAlturas = 0.0;
    int menores16 = 0;
    for (int i = 0; i < N; ++i) {
        somaAlturas += alturas[i];
        if (idades[i] < 16) menores16++;
    }

    double mediaAlturas = somaAlturas / N;
    double porcentagemMenores = (menores16 * 100.0) / N;

    cout << fixed << setprecision(2);
    cout << "Altura media: " << mediaAlturas << endl;
    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << porcentagemMenores << "%" << endl;

    for (int i = 0; i < N; ++i) {
        if (idades[i] < 16) cout << nomes[i] << endl;
    }

    return 0;
}
