#include <iostream>
using namespace std;

int main() {

    const float pi = 3.1416;
    float radio, perimetro, area;
    cout << "Ingrese el radio: ";
    cin >> radio;
    perimetro = 2 * pi * radio;
    area = pi * radio * radio;
    cout << "El resultado es:" << endl;
    cout << "Perimetro: " << perimetro << endl;
    cout << "Area: " << area << endl;
return 0;
}