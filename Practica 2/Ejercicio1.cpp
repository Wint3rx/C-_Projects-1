#include <iostream>
using namespace std;

int main(){
    string nombre, sexo;
    int edad;

    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cout << "Ingrese sexo: ";
    getline(cin, sexo);
    cout << "Ingrese edad: ";
    cin >> edad;
    cout << "Resultado: " << nombre << ", " << sexo << ", " << edad << endl;
    return 0;
}