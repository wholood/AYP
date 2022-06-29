#include <iostream>

using namespace std;

int main (){
    float h, m, Gh, Gm, resultado;

    cout<<"Ingrese la hora: "; cin>>h;
    cout<<"Ingrese los minutos: "; cin>>m;

    //Sabiendo que el recorrido de la hora es de 12 y equivale a 360 grados, conocemos que 1h equivale a 30 grados
    // 360g/12h= 30g/h

    Gh=h*30;

    //sabiendo que 1h son 30 grados y 1 h tiene 60 min sabemos que cada minuto equivale a 0.5grados
    // 30g/60m=0.5g/m

    Gh+=m*0.5; //Inclinación del horario según los minutos que pasan

   //Sabiendo que el recorrido completo del minutero equivale a 360grados sabemos que 360g/60min=6g/m

    Gm=m*6;

    //Para saber el angulo entre ambas agujas basta con restar sus angulos en relacion al punto 0

    resultado = Gh-Gm;

    cout<<"El angulo entre las agujas de "<<h<<":"<<m<<" es "<<resultado;

    return 0;
}