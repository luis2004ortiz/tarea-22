/*11) Una función recibe como parámetro 3 enteros que indican el año, mes y día del nacimiento de una persona. 
La función debe devolver la edad de la persona en años, meses y días. Debe investigar como capturar la fecha actual de la computadora.*/

#include <iostream>
#include <ctime>

using namespace std;

void obtenerFechaActual(int& a, int& m, int& d) {
    time_t t = time(0);
    tm* f = localtime(&t);
    a = f->tm_year + 1900;
    m = f->tm_mon + 1;
    d = f->tm_mday;
}

void calcularEdad(int an, int mn, int dn) {
    int aa, ma, da;
    obtenerFechaActual(aa, ma, da);

    int anios = aa - an;
    int meses = ma - mn;
    int dias = da - dn;

    if (meses < 0) {
        anios--;
        meses += 12;
    }

    if (dias < 0) {
        meses--;
        dias += 30; // Tomamos un promedio de días en el mes
    }

    cout << "Edad: " << anios << " años, " << meses << " meses, " << dias << " días" << endl;
}

int main() {
    int a, m, d;

    cout << "Ingrese el año de nacimiento: ";
    cin >> a;

    cout << "Ingrese el mes de nacimiento: ";
    cin >> m;

    cout << "Ingrese el día de nacimiento: ";
    cin >> d;

    calcularEdad(a, m, d);

    return 0;
}
