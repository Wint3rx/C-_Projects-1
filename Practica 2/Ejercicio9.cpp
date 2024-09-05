#include <iostream>
using namespace std;

int main() {

    int num, mod;
    bool par, impar;
    cout << "Ingrese un numero: ";
    cin >> num;
    mod = num % 2;
        if (mod == 0) {
    par = true;
    impar = false;
        } else {
    par = false;
    impar = true;
     }
        if (par) {
    cout << "El numero es PAR" << endl;
        } else {
    cout << "El numero es IMPAR" << endl;
     }
return 0;
}