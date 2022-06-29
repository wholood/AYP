//Haga un programa que calcule las raíces de un polinomio de segundo grado

#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main(){

    //Creo las varibles donde se guardaran los 3 numeros de la ecuacion de segundo grado y el resultado o los resultados finales
    float numA, numB, numC, resultado1, resultado2 = 0, raiz=0;

    //Le pido al usuario que introduzca los 3 numeros de la ecuación por separado
    cout<<"Este programa lo ayudara a calcular las raices de un polinomio de segundo grado, a continuacion introduzca los tres numeros del polinomio a calcular: "<<endl;
    cout<<"Introduzca el numero A: "<<endl; cin>> numA;
    cout<<"Introduzca el numero B: "<<endl; cin>> numB;
    cout<<"Introduzca el numero C: "<<endl; cin>> numC;

    raiz=sqrt(pow(numB,2) - 4 * numA * numC);
    
    /*comparamos el resultado que va dentro de la raíz para ver si no es un numero negativo 
    y por ende dar un resultado imaginario*/

    if(raiz > 0){
    //Escribo la formula de la resolvente, una para la variante positiva y otra para la negativa     
        resultado1 = (-numB + raiz) / (2 * numA);
        resultado2 = (-numB - raiz) / (2 *numA);

        //Si el resultado 1 es igual al resultado 2, la ecuación solo tiene una solucion, si no, imprimo los dos resultados
        if(resultado1 == resultado2){
            cout<<"La ecuacion solo tiene un resultado en los numeros reales, y es " <<resultado1 <<endl;
            }
        else{
            cout<<"El resultado para x1 es: "<< resultado1 <<endl; cout<<"El resultado para x2 es: "<< resultado2 <<endl;
        }   
    }
    else{
        cout<<"Su ecuación no tiene solución ya que el resultado es un numero imaginario";
    }

    system("pause");
    return 0;

}