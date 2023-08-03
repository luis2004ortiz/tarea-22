
/*2) Una función recibe como parámetro 1 entero que indica el día de la Semana. 
La función debe devolver el nombre del día de la semana. 
Por ejemplo, si es 1, devuelve "LUNES"; si es 2 devuelve "Martes"; etc. (Realizado en clases)
*/
#include<iostream>

using namespace std;

string dia_semana(int dia)
{
    string aux="";
    switch (dia)
    {
        case 1:
            aux="Lunes";
            break;

        case 2:
            aux="Martes";
            break;

        case 3:
            aux="Miercoles";
         break;

        case 4:
            aux="Jueves";
         break;
        case 5:
            aux="Viernes";
         break;
         case 6:
            aux="Sábado";
         break;

        case 7:
            aux="Domingo";
         break;
    }
    return aux;


}
int main()
{
    dia_semana(2);
}