#include <iostream>
#include <iomanip>
using namespace std;

void lerDados(int &id, int &horas, double &valorHora) {
    cout << "Numero do funcionario: ";
    cin >> id;
    cout << "Horas trabalhadas: ";
    cin >> horas;
    cout << "Valor por hora: ";
    cin >> valorHora;
}

double calcularPagamento(int horas, double valorHora) {
    return horas * valorHora;
}

void exibirPagamento(int id, double pagamento) {
    cout << fixed << setprecision(2);
    cout << "NUMBER = " << id << endl;
    cout << "SALARY = U$ " << pagamento << endl;
}

int main() {
    int id, horas;
    double valorHora;

    lerDados(id, horas, valorHora);
    double pagamento = calcularPagamento(horas, valorHora);
    exibirPagamento(id, pagamento);

    return 0;
}
