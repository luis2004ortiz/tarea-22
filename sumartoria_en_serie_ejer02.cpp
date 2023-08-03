/*4) Una función recibe como parámetro 2 números enteros, que indican el inicio y fin de una serie. Se pide calcular la sumatoria de los números comprendidos entre el inicio y fin de la serie.  (Realizado en clases)
Desde el main puede realizar llamadas como las siguientes:

sumatoria(4,9) hace la suma de : 4+5+6+7+8+9

sumatoria(9,4) hace la suma de : 9+8+7+6+5+4
*/
#include<iostream>

using namespace std;

int sumatoria(int desde, int hasta)
{
    int inicio=desde;
    int fin = hasta;
    if(desde>hasta)
    {
        inicio=hasta;
        fin=desde;
    }
    
    int suma=0;
    for(int k=inicio; k<=fin; k++)
    {
        suma=suma+k;

    }
    return suma;

}

int main()
{
    cout <<"Sumatoria entre dos número por teclado" << endl;

    cout <<"La sumatoria es : "<<sumatoria(4,9);
    return 0;
}