//Haga un programa que calcule las raíces de un polinomio de segundo grado

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;
int main(){

    //Creo las varibles donde se guardaran los 3 numeros de la ecuacion de segundo grado y el resultado o los resultados finales
    float numA, numB, numC, resultado1, resultado2 = 0;

    //Le pido al usuario que introduzca los 3 numeros de la ecuación por separado
    cout<<"Este programa lo ayudara a calcular las raices de un polinomio de segundo grado, a continuacion introduzca los tres numeros del polinomio a calcular: "<<endl;
    cout<<"Introduzca el numero A: "<<endl; cin>> numA;
    cout<<"Introduzca el numero B: "<<endl; cin>> numB;
    cout<<"Introduzca el numero C: "<<endl; cin>> numC;

    resultado1 = (-numB + sqrt(pow(numB,2) - 4 * numA * numC)) / (2 * numA);
    resultado2 = (-numB - sqrt(pow(numB,2) - 4 * numA * numC)) / (2 *numA);

    //Si el resultado 1 es igual al resultado 2, la ecuación solo tiene una solucion, si no, imprimo los dos resultados
    if(resultado1 == resultado2){
        cout<<"La ecuacion solo tiene un resultado en los numeros reales, y es " <<resultado1 <<endl;
    }
    else{
        cout<<"El resultado para x1 es: "<< resultado1 <<endl; cout<<"El resultado para x2 es: "<< resultado2 <<endl;
    }

    return 0;
}