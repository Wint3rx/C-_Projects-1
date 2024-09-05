#include <iostream>
using namespace std;

// Función recursiva para resolver la Torre de Hanoi
void torreHanoi(int n, char origen, char auxiliar, char destino) {
    if (n == 1) {
        cout << "Mueva el disco 1 desde la torre " << origen << " hasta la torre " << destino << endl;
        return;
    }

    torreHanoi(n - 1, origen, destino, auxiliar);
    cout << "Mueva el disco " << n << " desde la torre " << origen << " hasta la torre " << destino << endl;
    torreHanoi(n - 1, auxiliar, origen, destino);
}

int main() {
    int n;
    cout << "Ingrese el numero de discos: ";
    cin >> n;

    torreHanoi(n, 'A', 'B', 'C'); // Llamada inicial

    return 0;
}