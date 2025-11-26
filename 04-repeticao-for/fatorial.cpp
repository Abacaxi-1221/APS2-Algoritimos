#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Digite o valor de N: ";
    cin >> n;
    
    long long fatorial = 1;
    
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    
    cout << "FATORIAL = " << fatorial << endl;
    
    return 0;
}
