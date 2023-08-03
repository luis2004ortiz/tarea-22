/*
Escriba la función que determina si un número pasado como parámetro es múltiplo de 5
*/
#include <iostream>

using namespace std;


bool multiplo_5(int num)
{
    if(num % 5 ==0)
        return true;
    else
        return false;
}

int maim()
{
    int num =10;
    cout << "Este programa determina si el número ingresado es multiplo de 5 " << endl;
    cout << "--------------------------------------------------------------------" << endl;
   
    

    if(multiplo_5(num))
        cout << "Es multiplo de 5";
    else
        cout << "no es multiplo de 5";

    return 0;

}