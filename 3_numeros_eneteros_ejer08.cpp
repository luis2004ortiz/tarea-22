/*Una función recibe 3 números enteros. 
La función devuelve verdadero si uno de esos números es la suma de los otros dos.
*/

#include <iostream>

using namespace std;

bool esSumaDeOtrosDos(int numero1, int numero2, int numero3) {
    if (numero1 == numero2 + numero3 || numero2 == numero1 + numero3 || numero3 == numero1 + numero2) {
        return true;
    }
    return false;
}

int main() {
    int num1, num2, num3;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese el tercer número: ";
    cin >> num3;

    if (esSumaDeOtrosDos(num1, num2, num3)) {
        cout << "Verdadero. Uno de los números es la suma de los otros dos." << endl;
    } else {
        cout << "Falso. Ninguno de los números es la suma de los otros dos." << endl;
    }

    return 0;
}

