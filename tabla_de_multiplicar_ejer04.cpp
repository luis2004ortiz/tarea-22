/**/


#include<iostream>

using namespace std;

void tabla_multiplicar(int num)
{
    for(int k=1; k<=15; k++)
    {
        cout << endl << num << " x " << k << " = " << (num*k);
    }
}

void n_tablas(int limit)
{
    if(limit>1 && limit<=10)
    {
        for(int k=1; k<=limit; k++)
        {
            tabla_multiplicar(k);
        }
    } else {
        cout << "Rango no valido";
        return;
    }
}

int main()
{
    int num;
    cout << "Este programa muestra una tabla del 1 al 15, solo entre número del 1 al 10" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Ingresa un número: ";
    cin >> num;

    n_tablas(num);

    return 0;
}
 