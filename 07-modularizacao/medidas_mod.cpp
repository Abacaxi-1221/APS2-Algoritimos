#include <iostream>
#include <iomanip>
using namespace std;

double areaQuadrado(double lado) {
    return lado * lado;
}

double areaTriangulo(double base, double altura) {
    return (base * altura) / 2.0;
}

double areaTrapezio(double base1, double base2, double altura) {
    return ( (base1 + base2) * altura ) / 2.0;
}

int main() {
    cout << fixed << setprecision(2);

    double lado;
    cout << "Entre com o lado do quadrado: ";
    cin >> lado;
    cout << "AREA DO QUADRADO = " << areaQuadrado(lado) << endl;

    double base, altura;
    cout << "Entre com a base e a altura do triangulo: ";
    cin >> base >> altura;
    cout << "AREA DO TRIANGULO = " << areaTriangulo(base, altura) << endl;

    double b1, b2, h;
    cout << "Entre com as duas bases e a altura do trapezio: ";
    cin >> b1 >> b2 >> h;
    cout << "AREA DO TRAPEZIO = " << areaTrapezio(b1, b2, h) << endl;

    return 0;
}
