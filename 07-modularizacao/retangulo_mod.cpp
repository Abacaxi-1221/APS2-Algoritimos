#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double area(double width, double height) {
    return width * height;
}

double perimetro(double width, double height) {
    return 2.0 * (width + height);
}

double diagonal(double width, double height) {
    return sqrt(width * width + height * height);
}

int main() {
    double largura, altura;
    cout << "Entre com a largura do retangulo: ";
    cin >> largura;
    cout << "Entre com a altura do retangulo: ";
    cin >> altura;

    cout << fixed << setprecision(2);
    cout << "AREA = " << area(largura, altura) << endl;
    cout << "PERIMETRO = " << perimetro(largura, altura) << endl;
    cout << "DIAGONAL = " << diagonal(largura, altura) << endl;

    return 0;
}
