#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Serao digitados dados de quantos produtos? ";
    cin >> N;

    int abaixo10 = 0, entre10e20 = 0, acima20 = 0;
    double totalCompra = 0.0, totalVenda = 0.0;

    for (int i = 0; i < N; ++i) {
        string nome;
        double precoCompra, precoVenda;

        cout << "Produto " << (i+1) << ":" << endl;
        cout << "Nome: ";
        cin.ignore();
        getline(cin, nome);
        cout << "Preco de compra: ";
        cin >> precoCompra;
        cout << "Preco de venda: ";
        cin >> precoVenda;

        totalCompra += precoCompra;
        totalVenda += precoVenda;

        double lucroPercent = (precoVenda - precoCompra) / precoCompra * 100.0;
        if (lucroPercent < 10.0) abaixo10++;
        else if (lucroPercent <= 20.0) entre10e20++;
        else acima20++;
    }

    double lucroTotal = totalVenda - totalCompra;

    cout << "RELATORIO:" << endl;
    cout << "Lucro abaixo de 10%: " << abaixo10 << endl;
    cout << "Lucro entre 10% e 20%: " << entre10e20 << endl;
    cout << "Lucro acima de 20%: " << acima20 << endl;
    cout << fixed << setprecision(2);
    cout << "Valor total de compra: " << totalCompra << endl;
    cout << "Valor total de venda: " << totalVenda << endl;
    cout << "Lucro total: " << lucroTotal << endl;

    return 0;
}
