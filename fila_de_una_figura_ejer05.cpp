// Figura en espejo: Una función recibe como parámetro un entero que indica las NumF de una figura. Adicionalmente, recibe como parámetro un string que indica el ConF de la figura a dibujar. Por ejemplo, si NumF es 4 y el ConF es 'o', la figura sería:

#include <iostream>

using namespace std;

void dibujarFiguraEnEspejo(int filas, char relleno) {
    for (int i = -filas + 1; i < filas; i++) {
        int cantidadRellenos = filas - abs(i);
        for (int j = 0; j < cantidadRellenos; j++) {
            cout << relleno;
        }
        cout << endl;
    }
}

int main() {
    int filas;
    char relleno;

    cout << "Ingrese el número de filas de la figura: ";
    cin >> filas;

    cout << "Ingrese el relleno de la figura: ";
    cin >> relleno;

    dibujarFiguraEnEspejo(filas, relleno);

    return 0;
}
