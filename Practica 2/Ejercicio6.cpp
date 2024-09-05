#include <iostream>
using namespace std;

int main() {

    float medcm, medplg;
    cout << "Ingrese una medida en centimetros: ";
    cin >> medcm;
    medplg = medcm / 2.54;
    cout << "El resultado es: " << medplg << " pulgadas" << endl;
return 0;
}