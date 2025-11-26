#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        cout << "Digite um numero: ";
        cin >> x;
        
        if (x == 0) {
            cout << "NULO" << endl;
        } else {
            string paridade = (x % 2 == 0) ? "PAR" : "IMPAR";
            string sinal = (x > 0) ? "POSITIVO" : "NEGATIVO";
            cout << paridade << " " << sinal << endl;
        }
    }
    
    return 0;
}
