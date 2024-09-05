#include <iostream>
using namespace std;

int main() {
    string name;
    float notaparciales, zona;
    float finale;
    cout << "Ingrese su nombre: ";
    getline(cin, name);
    cout << "Ingrese nota de parciales: ";
    cin >> notaparciales;
    cout << "Ingrese la zona: ";
    cin >> zona;
    finale = notaparciales + zona;
    cout << "El nombre es: " << name << endl;
    cout << "La nota final es: " << finale << endl;
return 0;
}