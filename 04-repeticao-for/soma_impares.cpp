#include <iostream>
using namespace std;

int main() {
    int x, y;
    
    cout << "Digite dois numeros:" << endl;
    cin >> x >> y;
    
    int menor = (x < y) ? x : y;
    int maior = (x > y) ? x : y;
    
    int soma = 0;
    for (int i = menor + 1; i < maior; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    
    cout << "SOMA DOS IMPARES = " << soma << endl;
    
    return 0;
}
