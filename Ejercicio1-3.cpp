/*Trabajando con multiples unidades
Dadas dos "fechas" Dia/Hora/Minuto
Calcular cuanos Dias/Horas/Minutos han pasado de una fecha a la otra*/

#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int dI,hI,mI, dF,hF,mF; //dI = Dia inicial, dF = Dia final.

    cout<<"Indique el dia, la hora y el minuto de la fecha inicial en orden: "<<endl;
    cin>>dI>>hI>>mI;

    cout<<"Indique el dia, la hora y el minuto de la fecha final en orden: "<<endl;
    cin>>dF>>hF>>mF;

    //Transformación de unidades: llevamos todo a la minima unidad
    int fechaInicial = dI * 24 * 60 + hI * 60 + mI;
    int fechaFinal = dF * 24 * 60 + hF * 60 + mF;

    //Diferencia entre la fecha inicial y la fecha final
    int difmin = fechaFinal - fechaInicial;

    //Calculo
    /*Al dividir los minutos entre 60 nos daran las horas, nos interesa el reciduo ya que 
    representan la cantidad de minutos que no lograron convertirse en horas*/
    int minutos = difmin% 60; 

    //Dias
    int horas = difmin/60;
    int dias = horas / 24;

    //horas que no conforman un día
    horas = horas%24;

    //Imprimimos
    cout<< "Entre la fecha: "<<dI<<"/"<<hI<<"/"<<mI<<endl<<"Y: "<<dF<<"/"<<hF<<"/"<<mF<<endl<<"Hay: "<<dias<<"/"<<horas<<"/"<<minutos<<endl;

    return 0;
}