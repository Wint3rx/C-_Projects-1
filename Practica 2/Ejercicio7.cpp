#include <iostream>
using namespace std;

int main() {

    int seg, horas;
    cout << "Ingrese tiempo en segundos: ";
    cin >> seg;
    horas = seg / 3600;
    cout << "Las horas son: " << horas << " horas" << endl;
return 0;
}