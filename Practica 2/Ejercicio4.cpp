#include <iostream>
using namespace std;

int main() {

    int X, Y, suma, resta, multi, divi, modulo;
    cout << "Ingrese PRIMER NUMERO: ";
    cin >> X;
    cout << "Ingrese SEGUNDO NUMERO: ";
    cin >> Y;
    suma = X + Y;
    resta = X - Y;
    multi = X * Y;
    divi = X / Y;
    modulo = X % Y;
    cout << "La respuesta es:" << endl;
    cout << "SUMA: " << suma << endl;
    cout << "RESTA: " << resta<< endl;
    cout << "MULTIPLICACION: " << multi << endl;
    cout << "DIVISION: " << divi << endl;
    cout << "MODULO: " << modulo << endl;
return 0;
}