/*Ejercicio que separa un numero de 3 dijitos y retorna la suma de los mismos

Ejm: 123 => 1+2+3=6
*/
#include<iostream>
#include<math.h>

using namespace std;

int main (){
    //Declaramos las variables a usar
    int numero, unidad, decena, centena;

    cout<<"Ingrese el numero: "<<endl;
    cin>>numero;

    /* Para dividir el numero por cifras podemos dividir el numero entre 10 y 
    el residuo será el ultimo número 123/10=12.3, 123%10=3  */

    unidad = numero % 10; // 123%10=3

    //Hacemos la division para quedar unicamente con 12
    numero /= 10; //numero = numero / 10;

    //Una vez obtenido el 12 sacamos el 2
    decena = numero % 10; //12%10=2

    /*Como unicamente nos queda el 12 simplemente dividimos entre 10
    tratandose de un entero unicamente nos dejará el 1, no el 1.2*/
    centena = numero / 10; // 12/10= 1.2 => 1
    
    //Mostramos el resultado
    cout<<"La suma de "<<centena<<" + "<<decena<< " + "<<unidad<<" es igual a: "<<endl;
    cout<<(unidad+decena+centena)<<endl;

    return 0;
}