/*10) Una función recibe como parámetro un entero. La función debe imprimir este entero en su equivalente en hexadecimal(base 16).
*/

#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int numero;
    string hexadecimal;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    stringstream ss;
    ss << hex << numero;
    hexadecimal = ss.str();

    cout << "El equivalente en hexadecimal de " << numero << " es: " << hexadecimal << endl;

    return 0;
}

 