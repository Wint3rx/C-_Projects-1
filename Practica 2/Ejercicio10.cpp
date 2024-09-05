#include <iostream>
#include <string>
using namespace std;

int main() {

    string nom1, nom2, nom3;
    int ed1, ed2, ed3, prom;
    cout << "Ingrese el nombre del empleado 1: ";
    getline(cin, nom1);
    cout << "Ingrese la edad del empleado 1: ";
    cin >> ed1;
    cin.ignore();
    cout << "Ingrese el nombre del empleado 2: ";
    getline(cin, nom2);
    cout << "Ingrese la edad del empleado 2: ";
    cin >> ed2;
    cin.ignore();
    cout << "Ingrese el nombre del empleado 3: ";
    getline(cin, nom3);
    cout << "Ingrese la edad del empleado 3: ";
    cin >> ed3;
    prom = (ed1 + ed2 + ed3) / 3;
    cout << "Nombres de los empleados:" << endl;
    cout << nom1 << endl;
    cout << nom2 << endl;
    cout << nom3 << endl;
    cout << "Promedio de edades: " << prom << endl;
return 0;
}