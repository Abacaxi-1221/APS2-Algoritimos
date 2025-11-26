#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    
    cout << "Quantos casos voce vai digitar? ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int numerador, denominador;
        
        cout << "Entre com o numerador: ";
        cin >> numerador;
        
        cout << "Entre com o denominador: ";
        cin >> denominador;
        
        if (denominador == 0) {
            cout << "DIVISAO IMPOSSIVEL" << endl;
        } else {
            double resultado = (double)numerador / denominador;
            cout << fixed << setprecision(2) << "DIVISAO = " << resultado << endl;
        }
    }
    
    return 0;
}
