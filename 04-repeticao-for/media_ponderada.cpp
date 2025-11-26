#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    
    cout << "Quantos casos voce vai digitar? ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        double v1, v2, v3;
        
        cout << "Digite tres numeros:" << endl;
        cin >> v1 >> v2 >> v3;
        
        double media = (v1 * 2 + v2 * 3 + v3 * 5) / 10.0;
        
        cout << fixed << setprecision(1) << "MEDIA = " << media << endl;
    }
    
    return 0;
}
