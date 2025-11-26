#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    
    cout << "Quantos casos de teste serao digitados? ";
    cin >> n;
    
    int totalCobaias = 0;
    int totalCoelhos = 0;
    int totalRatos = 0;
    int totalSapos = 0;
    
    for (int i = 0; i < n; i++) {
        int quantidade;
        char tipo;
        
        cout << "Quantidade de cobaias: ";
        cin >> quantidade;
        
        cout << "Tipo de cobaia: ";
        cin >> tipo;
        
        totalCobaias += quantidade;
        
        if (tipo == 'C') {
            totalCoelhos += quantidade;
        } else if (tipo == 'R') {
            totalRatos += quantidade;
        } else if (tipo == 'S') {
            totalSapos += quantidade;
        }
    }
    
    cout << "RELATORIO FINAL:" << endl;
    cout << "Total: " << totalCobaias << " cobaias" << endl;
    cout << "Total de coelhos: " << totalCoelhos << endl;
    cout << "Total de ratos: " << totalRatos << endl;
    cout << "Total de sapos: " << totalSapos << endl;
    
    double percentualCoelhos = (totalCoelhos * 100.0) / totalCobaias;
    double percentualRatos = (totalRatos * 100.0) / totalCobaias;
    double percentualSapos = (totalSapos * 100.0) / totalCobaias;
    
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << percentualCoelhos << endl;
    cout << "Percentual de ratos: " << percentualRatos << endl;
    cout << "Percentual de sapos: " << percentualSapos << endl;
    
    return 0;
}
